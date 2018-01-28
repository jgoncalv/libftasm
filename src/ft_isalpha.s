section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 65
	jl isfalse			; si il est inferieur a A
	cmp rdi, 122
	jg isfalse			; si il est superieur a z
	cmp rdi, 90
	jle istrue			; si il est inferieur ou egal a Z
	cmp rdi, 97
	jge istrue			; si il est superieur ou egal a a 
						; sinon il est faux
isfalse:
	mov rax, 0
	ret

istrue:
	mov rax, 1
	ret