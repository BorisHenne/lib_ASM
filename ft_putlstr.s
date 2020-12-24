global _ft_putlstr

section .text

_ft_putlstr:
	mov 	rdx, rsi
	mov 	rsi, rdi
	mov 	rdi, 1
	mov 	rax, 0x2000004
	syscall
	jc 		.error
	ret

.error:
	mov 	rax, -1
	ret