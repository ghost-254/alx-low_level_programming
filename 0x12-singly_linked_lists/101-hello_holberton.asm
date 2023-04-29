; Author: Neville Otieno
; Description: Working on writing a 64-bit program..
; ...in assembly that prints Hello, Holberton

global _start
extern printf

section .data
	message db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
_start:
	; prepare arguments for printf function call
	push qword message
	push qword format
	call printf

	; clean up stack
	add rsp, 16

	; exit program
	mov eax, 0
	ret
