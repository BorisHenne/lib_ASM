
global _ft_strdup

extern _malloc
extern _ft_strlen
extern _ft_memcpy

section .text

_ft_strdup:
	push rdi
	xor rax, rax
	call _ft_strlen
	inc rax
	mov rbx, rax
	mov rdi, rbx
	call _malloc
	mov rdi, rax
	pop rsi
	mov rdx, rbx
	call _ft_memcpy
	ret
