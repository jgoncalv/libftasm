section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy


_ft_strdup:
	push rbp
	mov rbp, rsp

	call _ft_strlen		; recupere la len de la string
	push rdi

	add rax, 1			; on rajoute 1 pour le Null de fin
	push rax
	mov rdi, rax
	call _malloc
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy

exit:
	pop rbp
	ret