section .data
hello db "Hello, Holberton",10
section .text
global _start
_start:
mov rax, 4
mov rdi, 1
lea rsi, [hello]
mov rdx, 17
syscall
mov rax, 1
xor rdi, rdi
syscall
