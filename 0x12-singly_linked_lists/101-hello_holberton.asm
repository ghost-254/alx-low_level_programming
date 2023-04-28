section .data
	message db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
	global main

main:
	; prepare arguments for printf function call
	push qword message
	push qword format

	; call printf function
	mov rax, 0
	call printf

	; clean up stack
	add rsp, 16

	; return 0
	xor eax, eax
	ret
