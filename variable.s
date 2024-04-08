    .data
#char: .byte 'A\n'

x: .word 500
nl: .byte '\n'
#int_arr: .word 1,2,3,43,5

ant_arr: .word 1
         .word 2
         .word 2
         .word 15
         .word 17
string_with_t: .asciiz "CS120 E E"
#char_arr: .byte "A", "B", "C", "D"
emt_arr: .space 25
char:   .byte 'A'
        .byte 'B'
        .byte 'B'
    .text
main:   la $s0, x 
        la $s1, nl
        la $s2, string_with_t
        la $s3, char

        # lw $t0, x ==> Directly access value 

        lw $t0, 0($s0)
        addi $t0, $t0, 1 #
        sw $t0, 0($s0) #sw $t0, x==> Direcly save new data


       #y=y+x


        lw $t1, 0($s1)
        add $t1, $t1, $t0
        sw $t1, 0($s1)


        lb $t0, 2($s2)
        addi $t0, $t0, 1 
        sb $t0, 2($s2)

        lb $t1, ($s3)
        addi $t1, $t1, 5
        sb $t1, 2($s3)
        jr $ra
