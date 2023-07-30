section .data ; Data section, initialized variables
    msg db "Hello, Holberton", 0 ; C string needs a null terminator
    fmt db "%s", 10, 0 ; The printf format, "\n", null terminator

section .text ; Code section.
    global main ; the standard gcc entry point

    extern printf ; Declare that printf is defined elsewhere

main: ; the program label for the entry point
    push rbp ; set up stack frame, must be aligned

    mov rdi, fmt
    mov rsi, msg
    xor rax, rax ; Clear rax (this sets rax to 0)
    call printf ; Call C function

    pop rbp ; restore stack

    xor rax, rax ; Clear rax again (optional, as it's already 0)
    ret ; return
