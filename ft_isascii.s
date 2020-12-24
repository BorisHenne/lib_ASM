global _ft_isascii

section .text
	
_ft_isascii:
	mov rax, 1
	cmp rdi, 0x0
	jl exit
	cmp rdi, 0x7f
	jg exit
	ret

exit:
	mov rax, 0
	ret