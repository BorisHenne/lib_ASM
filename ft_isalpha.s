global _ft_isalpha

extern _ft_islower 
extern _ft_isupper

section .text

_ft_isalpha:
	call _ft_islower
	cmp rax, 1
	je exit
	call _ft_isupper
	je exit
	ret

exit:
	ret
