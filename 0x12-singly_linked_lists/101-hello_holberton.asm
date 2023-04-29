; Author: Neville Otieno
; Description: Working on writing a 64-bit program..
; ...in assembly that prints Hello, Holberton

section .data
	message db "Hello, Holberton", 0Ah, 0

section .text
	global main
	extern printf

main:
	push message
	call printf
	add rsp, 8
	ret
