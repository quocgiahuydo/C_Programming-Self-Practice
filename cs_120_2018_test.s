        .data
array:  .word 3
        .word 5
        .word 9
        .word 9
        .word 0


        .text
main:
        addi $sp, $sp, -8
        sw $ra, 0($sp)
        la $s0, array
        sw $s0, 4($sp)
        li $s1, 0
while:
        lw $t0, 0($s0)
        beq $t0, $0, DONE
        add $s1, $s1, $t0
        addi $s0, $s0, 4

        j while
DONE:

        lw $ra, 0($sp)
        lw $s0, 4($sp)
        addi $sp, $sp, 8
        jr $ra


