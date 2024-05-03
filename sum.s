    .data
f: 
g:
y:
    .text
main:
    addi $sp, $sp, -4
    sw $ra, 0($sp)
    li $a0, 2
    sw $a0, f
    li $a1, 3
    sw $a1, g
    jal sum
    sw $v0, y
    lw $ra, 0($sp)
    addi $sp, $sp, 4
    jr $ra
sum: 
    addi $sp, $sp, -4
    sw $ra 0($sp)
    add $v0, $a0, $a1
    lw $ra, 0($sp)
    addi $sp, $sp, 4

    jr $ra 
