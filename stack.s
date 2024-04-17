        .data
arr: .asciiz "Welcome to CS120"

        .text
main:
        #save state on stack
        addi $sp, $sp, -8
        sw $ra, 4($sp)

        #save local variable on the stack
        la $s0, arr
        sw $s0, 0($sp)
WHILE: 
        lw $t1, 0($s0)
        beq $t1, $0, DONE

        mv $a0, $t1
        jal switchcase 

        sw $v0, 0($s0)

        addi $s0, $s0, 1
        sw $s0, $sp


DONE:

switchcase

