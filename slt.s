    .data 
array: .word   1, 2, 4, 6, 0
    .text 
main:   #*ptr = array
        #pointer have the address of the first items 
        la $s0, array
        #Initialize result =0
        addi $t0, $00, $0

        lw $s1, 0($s0)
WHILE:  beq $s1, $0, DONE
        li $t1, 1
        ble $s1, $t1, SKIP  
        li $t1, 5
        bge $s1, $t1, SKIP
        add $t0, $t0, %s1
        add     
SKIP:   j WHILE

DONE:   jr $ra



    