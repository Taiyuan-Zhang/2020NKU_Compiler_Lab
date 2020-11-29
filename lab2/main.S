	.text
	.globl	a
	.data
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	1
	.globl	b
	.bss
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.text
	.globl	mypow
	.type	mypow, @function
mypow:
.LFB0:
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	$1, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-8(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L3
	movl	-8(%rbp), %eax
	popq	%rbp
	ret
.LFE0:
	.size	mypow, .-mypow
	.section	.rodata
.LC0:
	.string	"%d %d"
.LC1:
	.string	"answer is:%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	leaq	b(%rip), %rdx
	leaq	a(%rip), %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	b(%rip), %edx
	movl	a(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	mypow
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	ret
.LFE1:
	.section	.note.GNU-stack,"",@progbits
