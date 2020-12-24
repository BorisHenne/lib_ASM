global _ft_strlen

section .text
	
_ft_strlen:
	xor rcx, rcx
	xor rax, rax
	cmp rdi, 0
	je exit
	not rcx
	repne scasb
	not rcx
	sub rcx, 1
	mov rax, rcx
	ret
	
exit:
	ret