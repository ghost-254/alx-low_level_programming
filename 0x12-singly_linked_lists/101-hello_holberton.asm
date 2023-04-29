; Author: Neville Otieno
; Description: Working on writing a 64-bit program..
; ...in assembly that prints Hello, Holberton

global _start

section .data
	msg db "Hello, Holberton", 0 ; Null-terminated string
	fmt db "%s", 10, 0 ; Format string with newline and null terminator

section .text
_start:
	; Push stack frame
	push rbp
	mov rbp, rsp

	; Call printf
	mov edi, fmt ; First argument: format string
	mov esi, msg ; Second argument: message string
	xor eax, eax ; Clear return value register
	call printf

	; Clean up stack frame
	mov rsp, rbp
	pop rbp

	; Exit program
	mov eax, 0
	ret
