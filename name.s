#ASCII ==> Name
#Harry Do

	.data

H: 	.asciiz"H 0xF4628 1001000\n"
A: 	.asciiz"A 0xF4241 1000001\n"
R:	.asciiz"R 0xF695A 1010010\n" 
r:	.asciiz"R 0xF695A 1010010\n"
Y:	.asciiz"Y 0xF6D39 1011001\n"
	
	.text
main:	li $v0, 4
	la $a0, H
	syscall

	li $v0, 4
	la $a0, A
	syscall

	li $v0, 4
	la $a0, R
	syscall

	li $v0, 4
	la $a0, r
	syscall

	li $v0, 4
	la $a0, Y
	syscall

	li $v0, 10
	syscall
