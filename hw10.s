        .data
str:    .asciiz "Homework-10"

        .text
main:
        addi $sp, $sp, -8
        sw $ra, 0($sp)
        la $s0, str
        sw $s0, 4($sp)
        
FOR:
        lb $t1, 0($s0)
        
        beq $t1, $0, DONE
        
        move $a0, $t1

        jal uppercase

        move $t1, $v0

        sb $t1, 0($s0)
        addi $s0, $s0, 1

        j FOR
DONE:
        li $v0, 4
        la $a0, str
        syscall

        lw $ra, 0($sp)
        
        lw $s0, 4($sp)

        addi $sp, $sp, 8

        jr $ra

uppercase:  
        
        addi $sp, $sp, -4
        
        sw $ra, 0($sp)
        
        li $t0, 'a'
        
        ble $a0, $t0, UDONE
        
        li $t0, 'z'
        
        bge $a0, $t0, UDONE
        
        addi $a0, $a0, -32

UDONE:  
        move $v0, $a0
        
        lw $ra, 0($sp)
        
        addi $sp, $sp, 4
        
        jr $ra
