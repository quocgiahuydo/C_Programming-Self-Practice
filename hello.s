#Harry Do
#Hello World for MIPS

	.data
hello: .asciiz "Hello World!\n"
	.text
main:	li $v0, 4
	la $a0, hello
	syscall

	li $v0, 10
	syscall



