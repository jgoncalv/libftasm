section .text
	global _ft_strlen

_ft_strlen:
	xor rdx, rdx

while:
	cmp byte[rdi + rdx], 0
	je return
	inc rdx
	jmp while

return:
	mov rax, rdx
	ret
