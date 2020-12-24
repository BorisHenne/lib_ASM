global _ft_islower

section .text

_ft_islower:
	mov rax, 1
	cmp rdi, 0x61
	jl exit
	cmp rdi, 0x7a
	jg exit
	ret
	
exit:
	mov rax, 0
	ret
