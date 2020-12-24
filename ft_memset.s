global _ft_memset

section .text

_ft_memset:
	push rdi
	mov rax, rsi
	mov rcx, rdx
	rep stosb
	pop rdi
	mov rax, rdi 
	ret
