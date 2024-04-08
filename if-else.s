        .data
x:  .word 10
y:  .word 3
z:  .word 2
        .text


main:   la $s0, x
        
        lw $s1, 0($s0)

        lw $s2, 4($s0)

        lw $s3, 8($s0)

        bne $s1, $s2, ADD
        
        add $t0, $s2, $s1
        
        li $v0, 1

        add $a0, $t0, $0
        
        
        syscall

        j DONE
        


ADD:    sub $t0, $s2, $s1
        
        li $v0, 1
        
        add $a0, $t0, $0
        
        syscall
        j DONE
        
DONE:   jr $ra