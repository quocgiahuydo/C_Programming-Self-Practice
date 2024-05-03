    .data
x:  .word 1
    .word 2
    .word 4

y:  .word  3
    .word  4
    .word  4

z:

    .text 
main: 
        la $s0, x
        la $s1, y
        la $s2, z
        li $t0, 0
        li $t1, 3
FOR:
        bge $t0, $t1, DONE
        lw $a0, 0($s0)
        lw $a1, 0($s1)
        add $s3, $a0, $a1
        sw $s3, 0($s2)
        
        addi $t0, $t0, 1
        addi $s0, $s0, 4
        addi $s1, $s1, 4
        addi $s2, $s2, 4

        j FOR
DONE: 
        la $s2, z
        lw $t0, 0($s2)
        lw $t1, 4($s2)
        lw $t2, 8($s2)
        jr $ra 


