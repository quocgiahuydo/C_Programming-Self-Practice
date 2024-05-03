        .data
arr: .asciiz "Welcome trrh Jahf asdj the woeld "

        .text
main:
        #save state on stack
        addi $sp, $sp, -8
        sw $ra, 4($sp)

        #save local variable on the stack
        la $s0, arr
        sw $s0, 0($sp)
WHILE: 
        lb $t1, 0($s0)
        beq $t1, $0, DONE

        move $a0, $t1
        jal switchcase 

        sb $v0, 0($s0)

        addi $s0, $s0, 1
        sw $s0, 0($sp)
        j WHILE


DONE:

        li $v0, 4
        la $a0, arr
        syscall

        lw $ra, 4($sp)
        addi $sp, $sp, 8
        jr $ra




switchcase:
        addi $sp, $sp, -4
        sw $ra,  0($sp)
        li $t0, 'a'
        blt $a0, $t0, s_done

        li $t0, 'z'
        bgt $a0, $t0, s_done
        addi, $a0, $a0, -32

s_done:
        move $v0, $a0
        lw $ra 0($sp)
        addi $sp, $sp, 4
        jr $ra


