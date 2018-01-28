section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	jl isfalse ; si inferieur a 0 faux
	cmp rdi, 57
	jg isfalse ; si superieur a 9 faux
	jmp istrue

isfalse:
	mov rax, 0
	ret

istrue:
	mov rax, 1
	ret