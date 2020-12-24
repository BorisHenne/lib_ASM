global _ft_isupper

section .text

_ft_isupper:
	mov rax, 1
	cmp rdi, 0x41
	jl exit
	cmp rdi, 0x5a
	jg exit
	ret

exit:
	mov rax, 0
	ret

