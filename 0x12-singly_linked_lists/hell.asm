section .data
    hello db "Hello, Holberton",10,0  ; The string to be printed, with newline

section .text
    global main

main:
    ; Prepare function parameters
    mov rdi, hello  ; First parameter: the format string
    call printf    ; Call the printf function

    ; Exit the program
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; exit status (0)
    syscall
