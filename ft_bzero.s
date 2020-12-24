global _ft_bzero

section		.text
_ft_bzero:
	cmp		rdi, 0
	je		exit
	dec		rsi 
	cmp		rsi, 0
	jl		exit
	mov		byte[rdi + rsi], 0
	jmp		_ft_bzero
	ret

exit:
	ret