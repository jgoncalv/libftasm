section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl isfalse
	cmp rdi, 127
	jg isfalse
	mov rax, 1
	ret

isfalse:
	mov rax, 0
	ret