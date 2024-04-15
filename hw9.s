# Harry Do       
        .data
arr:   .word 10, 2, 31, 44, 0, 9
prompt: .asciiz "Result = "
        .text
main:   la $s0, arr
        li $s1, 0
        li $t2, 6
        li $s2, 30
        li $t0, 0   

FOR:    lw $t1, 0($s0)
        bge $t0, $t2, DONE
        ble $t1, $s2, SKIP
        add $s1, $s1, $t1
        j SKIP

DONE:   li $v0, 4
        la $a0, prompt
        syscall
        li $v0, 1
        add $a0, $s1, $0
        syscall
        jr $ra

SKIP:   addi $s0, $s0, 4
        addi $t0, $t0, 1 
        j FOR