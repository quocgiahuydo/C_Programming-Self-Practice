	.data 

	.text

main:
	#$s0 = 5
	li $s0, 5
	
	#$s1 =7
	li $s1, 7

	#$s2 = $s0 + $s1

	add $s2, $s0, $s1
	
	li $s0, 0x1234abcd

	li $s4, 2

	add $s3,$s0,$s4
	
	jr $ra
