%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define READ				3
%define WRITE				4
%define BUF_SIZE			1024

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp
	sub rbp, BUF_SIZE			; on prepare le buffeur

	cmp di, -1
	jle end

	mov rbx, rdi				; stock rdi dans rbx
	mov rsi, rbp				; rsi pointe sur le buf

read_file:
	mov rdi, rbx
	mov rdx, BUF_SIZE
	mov rax, MACH_SYSCALL(READ)
	syscall
	cmp rax, 0
	jle end

	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0
	jle end
	jmp read_file


end:
	add rbp, BUF_SIZE
	pop rbp
	ret