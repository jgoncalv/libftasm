%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

section .data
	newline db 0x0a
	null db "(null)"

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	;cmp rdi, 0
	;je retnull
	mov rcx, rdi
	call _ft_strlen
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	mov rsi, rcx
	syscall

	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	lea rsi, [rel newline]
	syscall

	ret

retnull:
	lea rax, [rel null]
	ret