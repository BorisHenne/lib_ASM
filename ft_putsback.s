
global _ft_puts

extern _ft_strlen

section .data
	null:	db "(null)"
	null_l:	equ $-null 			; string lenght

section .text
_ft_puts:
	cmp rdi, 0					; s != NULL ?
	je .null
   	xor	rax, rax 				; ret = 0
	push rdi 

.null:
	lea		   rcx, [rel null]  ;first byte of (null) from rdi
    mov        rdi, 1
    mov        rsi, rcx
    mov        rdx, null_l		; longueur de null
    mov        rax, 0x2000004
    syscall

.write:
	call _ft_strlen
	mov rdx, rax
	mov rdi, 1					; Write to standard out = 1
	pop rsi                	; The address of rdi string              	
	mov rax, 0x2000004      	; System call write = 4
	syscall
	jmp .line

.line:
	mov rdi, 0xA				; "\n"
	lea rcx, [rel char] 		; write(1, &c, 1)
	mov [rcx], rdi
	mov rdi, 1
	mov rsi, rcx
	mov rdx, 1
	mov rax, 0x2000004	
	syscall                 ; Invoke the kernel
	
section .bss
	char:	resb 0x1