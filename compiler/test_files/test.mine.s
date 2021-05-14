    .text
.LC0:
    .string "Please enter one integer:\n"
.LC1:
    .string "%d"
.LC2:
    .string "You enter a value greater than 10\n"
.LC3:
    .string "You enter a value not greater than 10\n"
    

    
    .global main
main:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp

    movl $0, -4(%rbp)
    leaq .LC0(%rip), %rdi
    call printf@PLT
    leaq -4(%rbp), %rax

    movq %rax, %rsi
    leaq .LC1(%rip), %rdi
    movl    $0, %eax
    call    scanf@PLT
    movl    -4(%rbp), %eax
    cmpl    $10, %eax
    jle     .L2
    leaq    .LC2(%rip), %rdi
    call    printf@PLT
    jmp     .L3
    
.L2:
    leaq    .LC3(%rip), %rdi
    call    printf@PLT
.L3:
    movl    $0, %eax
    addq    $16, %rsp
    popq    %rbp
    
    ret
