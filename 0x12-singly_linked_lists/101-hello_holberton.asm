section .data
    hello_msg db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    global _start

_start:
    ; Load the address of the hello_msg into rdi (first argument for printf)
    lea rdi, [hello_msg]

    ; Load the address of the format string into rsi (second argument for printf)
    lea rsi, [format]

    ; Call the printf function
    call printf

    ; Load the address of the newline into rdi (first argument for printf)
    lea rdi, [newline]

    ; Load the address of the format string into rsi (second argument for printf)
    lea rsi, [format]

    ; Call the printf function
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor edi, edi        ; return code 0
    syscall

; printf function (64-bit System V calling convention)
printf:
    push rbp            ; save base pointer
    mov rbp, rsp        ; set up new base pointer

    ; Call printf function
    mov rax, 0          ; syscall number for printf
    mov rdi, rsi        ; move format string pointer to rdi (first argument)
    call rax            ; call printf

    pop rbp             ; restore base pointer
    ret                 ; return from the function

