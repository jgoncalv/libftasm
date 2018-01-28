section .text
	global _ft_isupper

_ft_isupper:
	cmp rdi, 65
	jl isfalse
	cmp rdi, 90
	jg isfalse
	mov rax, 1
	ret

isfalse:
	mov rax, 0
	ret