global _ft_toupper

extern _ft_islower

section .text

_ft_toupper:
	call _ft_islower
	cmp rax, 1
	je exit
	mov rax, rdi
	ret

exit:
	sub rdi, 32
	mov rax, rdi
	ret
