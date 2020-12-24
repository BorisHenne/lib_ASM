global 	_ft_cat

section .text


	_ft_cat:
	    mov        r8, rdi
	    lea        rsi, [rel buf] ;rel : force nasm to use RIP relative adressing

	.reset_fd:
	    mov        rdi, r8

	.loop:
	    mov        rdx, buflen
	    mov        rax, 0x2000003 ; read
	    syscall
	    jc        .error
	    cmp        rax, 0 		; read all ?
	    je        .end
	    mov        rdi, 1 		; fd
	    mov        rdx, rax 	; len
	    mov        rax, 0x2000004 ; write
	    syscall
	    jmp        .reset_fd

	.error:
	.end:
	    ret

	section .bss				;variable uninitialised 
	buf:	    resb 256		;reserve byte
	buflen:	    equ $-buf		;get length of buffer