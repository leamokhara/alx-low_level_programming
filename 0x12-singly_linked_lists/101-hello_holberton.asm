	global	main
	external printf


	section .text
main:
	move	rdi, format
	move	rax, 0
	call	printf
	move	rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
