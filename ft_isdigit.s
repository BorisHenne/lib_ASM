global _ft_isdigit

section .text

_ft_isdigit:
	mov rax, 1 
	cmp	rdi, 0x30
	jl exit
	cmp rdi, 0x39
	jg exit
	ret

exit:
	mov rax, 0
	ret 
