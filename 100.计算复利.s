	.file	"100.\350\256\241\347\256\227\345\244\215\345\210\251.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d"
.LC2:
	.string	"$%.2lf"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-24(%rbp), %eax
	cvtsi2sd	%eax, %xmm0
	movsd	.LC1(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	$2, -20(%rbp)
	jmp	.L2
.L3:
	movl	-24(%rbp), %eax
	cvtsi2sd	%eax, %xmm0
	movsd	-16(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-16(%rbp), %xmm1
	movsd	.LC1(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	addl	$1, -20(%rbp)
.L2:
	cmpl	$6, -20(%rbp)
	jle	.L3
	movq	-16(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC2(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	2413428023
	.long	1072697620
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
