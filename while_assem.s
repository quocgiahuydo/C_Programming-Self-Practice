    .data 
pow: .word 1
x: .word 0
nl: .asciiz "\n"

    .text
main:   la $s0, pow
        lw $s1, 0($s0)
        lw $s2, 4($s0)
        addi $t0, $0, 128
        j while
while:  beq $s1, $t0, DONE
        sll, $s1, $s1, 1
        addi $s2, $s2, 1
        j while

DONE: 
        li $v0, 1
        addi $a0, $s1, 0
        syscall

        li $v0, 4
        la $a0, nl
        syscall

        li $v0, 1
        addi $a0, $s2, 0
        syscall

        jr $ra

