section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    global _start

extern printf

_start:
    mov esi, msg
    mov edi, fmt
    mov eax, 0
    call printf

   mov eax, 60
    xor edi, edi
    syscall

