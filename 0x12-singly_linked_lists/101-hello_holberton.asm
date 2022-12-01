	section .text
	global main
	
main: 	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, len
	syscall
	mov rax, 60
	xor rdi, rdi
	syscall
	
	section .data
message: db "Hello, Holberton", 10
	len equ $-message
