	SECTION .data
msg:	db "Hello, Holberton", 0
format:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, format
	mov eax, 0
	call printf

	mov eax, 0
	ret
