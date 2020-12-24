global _ft_isprint

section .text

_ft_isprint:
	mov rax, 1
	cmp rdi, 0x20
	jl exit
	cmp rdi, 0x7e
	jg exit
	ret

exit:
	mov rax, 0
	ret
