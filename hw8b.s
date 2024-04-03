    .data
    .text
main:   li $s0, 250
        li $s1, 50
        li $s2, 0xabcd0123
        add $t1, $s0, $s1
        add $s3, $t1, $s2
        li $t0, 0x10000000
        sw $s3, 0xC($t0)
        jr $ra

        