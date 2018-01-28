section .text
	global _ft_tolower
	extern _ft_isupper

_ft_tolower:
	call _ft_isupper
	cmp rax, 0
	je return
	add rdi, 32

return:
	mov rax, rdi
	ret