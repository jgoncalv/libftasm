section .text
	global _ft_strcat

_ft_strcat:
	mov rax, rdi
	xor rdx, rdx

strend:
	cmp byte[rdi], 0
	je concat
	inc rdi
	jmp strend

concat:
	cmp byte[rsi], 0
	je return
	mov cl, byte[rsi]
	mov byte[rdi + rdx], cl
	inc rdx
	inc rsi
	jmp concat

return:
	mov byte[rdi + rdx], 0
	ret
