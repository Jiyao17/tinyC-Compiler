
.LC0:
	.string	"Please enter one integer:\n"
.LC1:
	.string	"%d"
.LC2:
	.string	"You entered a value greater than 10.\n"
.LC3:
	.string	"You entered a value not greater than 10.\n"



	.global main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$8,	%rsp
	movl	$0,	-4(%rbp)
.printf0:
	movl	$0,	%esi
	movl	$.LC0,	%edi
	movl	$0,	%eax
	call	printf


.scanf1:
	leaq	-4(%rbp),	%rsi
	movl	$.LC1,	%edi
	movl	$0,	%eax
	call	scanf
	movl	-4(%rbp),	%eax


	movl	-4(%rbp),	%eax
	push	%rax
	movl	$10,	%eax
	movl	%eax,	%ebx
	pop	%rax
	cmpl	%eax,	%ebx
	jg	.L2
.printf4:
	movl	$0,	%esi
	movl	$.LC2,	%edi
	movl	$0,	%eax
	call	printf


	jmp .L3
.L2:
.printf5:
	movl	$0,	%esi
	movl	$.LC3,	%edi
	movl	$0,	%eax
	call	printf


.L3:
	movl	$0,	%eax

	leave
	ret

