	.data
x:	.word 0x24681357
str:	.asciiz "CS120"
y: 	.word 0xcdef1234
z:	.word 0x0
q: 	.word 0xff00acef

	.text
main: 	la $t0, x
	lw $s0, 0($t0)
	
	la $t1, str
	lb $s0, 0($t1)
	lb $s1, 1($t1)
	lb $s2, 2($t1)
	lb $s3, 3($t1)
	add $t0, $s0, $s1

	la $t0, z
	sw $s0, -4($t0)
	sw $s1, 4 ($t0)
	
	jr $ra
