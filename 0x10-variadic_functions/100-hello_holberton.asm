section .data
	msg db "Hello, main",10

	section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 12
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
