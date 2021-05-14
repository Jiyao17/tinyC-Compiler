.LC0:
	.string	"hello world!\n"
	.global main
main:
	pushq	%rbp
	movq	%rsp, %rbp
.printf:
	movl	$0,	%esi
	movl	$.LC0,	%edi
	movl	$0,	%eax
	call	printf
	movl	$0,	%eax
	leave

	ret