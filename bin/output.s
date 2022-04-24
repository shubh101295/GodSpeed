.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $64, %rsp


	mov	-8(%rbp), %rbx
	mov 	$2 ,	%rbx


	mov	-16(%rbp), %r15
	mov 	$4 ,	%r15

	mov	-40(%rbp), %r14
	mov 	%r15,	%r14

	shl	$2 ,	%r14

	mov	-64(%rbp), %r13
	mov 	%r14,	%r13


	mov	-56(%rbp), %r12
	mov 	%r13,	%r12

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov %r12,	-56(%rbp)
	mov %r13,	-64(%rbp)
	mov %r14,	-40(%rbp)
	mov %r15,	-16(%rbp)
	mov %rbx,	-8(%rbp)
	mov 	$format0,	%rdi

	mov 	%r12,	%rsi

	mov %r12,	-56(%rbp)
	mov %r13,	-64(%rbp)
	mov %r14,	-40(%rbp)
	mov %r15,	-16(%rbp)
	mov %rbx,	-8(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx


	mov %rbp, %rsp
	pop %rbp
	ret

	mov $60, %rax
	xor %rdi, %rdi
	syscall

.data
format0:
	.asciz	"%d \n"
