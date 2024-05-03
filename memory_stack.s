        .data
str:    .asciiz "\nThe value is: "

nl:     .byte '\n'

arr:    .word 11
        .word 22
        .word 24
        .word 24
        .word 23
        .word 2
        .word 24
        .word 42

        .text
main:
        addi $sp, $sp, -8
        sw $ra, 4($sp)

        
        la $s0, arr
        
        sw $s0, 0($sp)
WHILE: 
        lb $s3, 0($s0)

        beq $s3, $0, DONE

        move $t1, $s3
        
        jal plus_four



        move $s3, $s2


        la $a0, str
        li $v0, 4
        syscall

        addi $a0, $s3, 0
        li $v0, 1
        syscall
        
        la $a0, nl
        li $v0, 4
        syscall
        
        sb $s3, 0($s0)

        
        addi $s0, $s0, 4

        j WHILE

DONE: 

        

        lw $ra, 4($sp)

        lw $s0, 0($sp)

        addi $sp, $sp, 8

        jr $ra

plus_four:

        addi $sp, $sp, -8
        
        sw $ra, 4($sp)
        
        sw $s1, 0($sp)

        addi $s1, $t1, 4

        move $s2, $s1

plus_four_done:

        lw $ra, 4($sp)
        
        lw $s1, 0($sp)

        addi $sp, $sp, 8

        jr $ra
