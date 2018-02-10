section .text
    global    _ft_strcmp

_ft_strcmp:
    mov rax, 0

strcmp:
    mov r8b, byte[rdi]
    cmp r8b, byte[rsi]
    jne retdif
    cmp r8b, 0
    je ret
    inc rdi
    inc rsi
    jmp strcmp

retdif:
    movzx rax, byte[rdi]
    movzx rcx, byte[rsi]
    sub rax, rcx
    ret

ret:
    mov rax, 0
    ret