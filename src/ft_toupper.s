section .text
	global _ft_toupper
	extern _ft_islower

_ft_toupper:
	call _ft_islower
	cmp rax, 0
	je end
	sub rdi, 32 ; on soustrait de 32 pour mettre en uppercase

end:
	mov rax, rdi
	ret