global _ft_tolower

extern _ft_isupper

section .text

_ft_tolower:
	call _ft_isupper
	cmp rax, 1
	je exit
	mov rax, rdi
	ret

exit:
	add rdi, 32
	mov rax, rdi
	ret