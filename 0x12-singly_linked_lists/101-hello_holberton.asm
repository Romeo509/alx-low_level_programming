SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s",0
nl db 10,0

SECTION .text
global main
extern printf
main:
mov esi, msg
mov edi, fmt
mov eax, 0
call printf
mov eax, 0
ret
