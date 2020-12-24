global _ft_memcpy

section .text

_ft_memcpy:
		
	xor rax, rax
	cmp rdi, 0
	je exit
	mov	rax, rdi
	mov rcx, rdx
	rep movsb
	ret
	
exit:
	ret
