section .text
	global _ft_islower

_ft_islower:
	cmp rdi, 97
	jl isfalse
	cmp rdi, 122
	jg isfalse
	mov rax, 1
	ret

isfalse:
	mov rax, 0
	ret