        .data 
arr:    .word 1
        .word 2
        .word 3
        .word 4
        .word 5

        .text
main:
        la $s0, arr
        li $t0, 10
        lw $s1, 0($s0)
        sw $t0, 0xC($s0)
    
        jr $ra
