section .text
	global _ft_bzero

_ft_bzero:
	cmp rdi, 0
	je return
	mov rdx, 0

while:
	cmp rdx, rsi
	je return
	mov byte[rdi + rdx], 0
	inc rdx
	jmp while

return:
	ret
