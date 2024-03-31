	.data 

	.text

main:
	#$s0 = 5
	li $s0, 5
	
	#$s1 =7
	li $s1, 7

	#$s2 = $s0 + $s1

	add $s2, $s0, $s1
	
	# $s0= 0x1234abcd
	li $s0, 0x1234abcd


	addi $s4,$s0,3

	#save register $s4 at memory address 0x10000000	

	li $t0, 0x10000000
	sw $s4, 0($t0)

	sw $s3, 0xC($t0)
	li $t1, 'A'

	sb $t1, 5($t0)
	jr $ra

