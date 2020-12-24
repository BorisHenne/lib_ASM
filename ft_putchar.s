global _ft_putchar

extern _ft_putlstr

section .text
_ft_putchar:
	lea		rcx, [rel char]
	mov		[rcx], dil
	mov 	rdi, rcx
	mov 	rsi, 1
	jmp 	_ft_putlstr
	ret 

section .bss
	char resb 1