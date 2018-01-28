section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32 ; compare avec espace
	jl isfalse
	cmp rdi, 126 ; compare avec ~
	jg isfalse
	mov rax, 1
	ret

isfalse:
	mov rax, 0
	ret