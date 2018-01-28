section .text
	global _ft_memset

_ft_memset:
	enter 0, 0
	push rdi
	mov rcx, rdx
	mov rax, rsi
	rep stosb
	pop rax
	leave
	ret