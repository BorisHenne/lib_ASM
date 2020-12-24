
extern	_ft_strlen
extern	_ft_memcpy
global	_ft_strcat
section .text
	
		
	_ft_strcat:
		push rdi
		mov rax, 0
		cmp rdi, 0
		je exit
		cmp rsi, 0
		je exit					;all of the above is security

		call _ft_strlen			;strlen(s1)
		mov r15, rax			; lenght of s1 in r15
		
		mov rdi, rsi
		call _ft_strlen	
		inc rax					;for '\0'

		mov rdx, rax			;lenght of s2 in rdx
		pop rdi					;put initial value of rdi in rdi
		push rdi
		add rdi, r15			;go to end of chain
		call _ft_memcpy


	exit:
	pop rax
	ret