	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	global main
extern printf
main:
mov edi, fmt
mov esi, msg
mov eax, 0
call printf

ret
mov eax, 0
