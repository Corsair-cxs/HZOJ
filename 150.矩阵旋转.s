	.file	"150.\347\237\251\351\230\265\346\227\213\350\275\254.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d%d"
.LC1:
	.string	"%hd"
.LC2:
	.string	"%hd "
.LC3:
	.string	"\n%p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1664, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-1652(%rbp), %rdx
	leaq	-1648(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-1648(%rbp), %eax
	movslq	%eax, %rdx
	movl	-1652(%rbp), %eax
	cltq
	imulq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -1624(%rbp)
	movq	-1624(%rbp), %rax
	movq	%rax, -1616(%rbp)
	movl	$1, -1644(%rbp)
	jmp	.L2
.L3:
	movl	-1644(%rbp), %eax
	subl	$1, %eax
	cltq
	movq	-1616(%rbp,%rax,8), %rax
	movl	-1652(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-1644(%rbp), %eax
	cltq
	movq	%rdx, -1616(%rbp,%rax,8)
	addl	$1, -1644(%rbp)
.L2:
	movl	-1648(%rbp), %eax
	cmpl	%eax, -1644(%rbp)
	jl	.L3
	movl	$0, -1640(%rbp)
	jmp	.L4
.L7:
	movl	$0, -1636(%rbp)
	jmp	.L5
.L6:
	movl	-1640(%rbp), %eax
	cltq
	movq	-1616(%rbp,%rax,8), %rax
	movl	-1636(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -1636(%rbp)
.L5:
	movl	-1652(%rbp), %eax
	cmpl	%eax, -1636(%rbp)
	jl	.L6
	addl	$1, -1640(%rbp)
.L4:
	movl	-1648(%rbp), %eax
	cmpl	%eax, -1640(%rbp)
	jl	.L7
	movl	$0, -1632(%rbp)
	jmp	.L8
.L11:
	movl	$0, -1628(%rbp)
	jmp	.L9
.L10:
	movl	-1632(%rbp), %eax
	cltq
	movq	-1616(%rbp,%rax,8), %rax
	movl	-1628(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -1628(%rbp)
.L9:
	movl	-1652(%rbp), %eax
	cmpl	%eax, -1628(%rbp)
	jl	.L10
	movl	-1632(%rbp), %eax
	cltq
	movq	-1616(%rbp,%rax,8), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -1632(%rbp)
.L8:
	movl	-1648(%rbp), %eax
	cmpl	%eax, -1632(%rbp)
	jl	.L11
	movq	-1624(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	$0, -1624(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
