section .data
    hello db "Hello, Holberton",0
    fmt db "%s",10,0  ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, fmt
    mov rsi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall


