.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $184, %rsp


	mov	-8(%rbp), %rbx
	mov 	$5 ,	%rbx

	mov	-32(%rbp), %r15
	lea -8(%rbp),	%r15


	mov	-24(%rbp), %r14
	mov 	%r15,	%r14

	mov	-56(%rbp), %r13
	lea -24(%rbp),	%r13


	mov	-48(%rbp), %r12
	mov 	%r13,	%r12

	mov %r12,	-48(%rbp)
	mov %r13,	-56(%rbp)
	mov %r14,	-24(%rbp)
	mov %r15,	-32(%rbp)
	mov %rbx,	-8(%rbp)
	mov	-152(%rbp), %r11
	mov (	%r12), 	%r11

	mov %r11,	-152(%rbp)
	mov %r12,	-48(%rbp)
	mov %r13,	-56(%rbp)
	mov %r14,	-24(%rbp)
	mov %r15,	-32(%rbp)
	mov %rbx,	-8(%rbp)
	mov	-144(%rbp), %r10
	mov (	%r11), 	%r10

	mov %rbx,	-8(%rbp)
	mov	-112(%rbp), %rbx
	mov 	%r10,	%rbx

	add	$1 ,	%rbx

	mov %r15,	-32(%rbp)
	mov	-128(%rbp), %r15
	mov 	%rbx,	%r15

	mov 	%r15,	%r10

	mov %r10,	-144(%rbp)
	mov %r11,	-152(%rbp)
	mov %r12,	-48(%rbp)
	mov %r13,	-56(%rbp)
	mov %r14,	-24(%rbp)
	mov %r15,	-128(%rbp)
	mov %rbx,	-112(%rbp)
	mov	-144(%rbp), %rbx
	mov	-152(%rbp), %r15
	mov	%rbx, (%r15)

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax
	sub $8, %rsp

	mov %r15,	-152(%rbp)
	mov %rbx,	-144(%rbp)
	mov	-168(%rbp), %r14
	mov	-48(%rbp), %r13
	mov (	%r13), 	%r14

	mov %r13,	-48(%rbp)
	mov %r14,	-168(%rbp)
	mov %r15,	-152(%rbp)
	mov %rbx,	-144(%rbp)
	mov	-184(%rbp), %r12
	mov (	%r14), 	%r12

# Debug: WB without flush
	mov %r12,	-184(%rbp)
	mov %r13,	-48(%rbp)
	mov %r14,	-168(%rbp)
	mov %r15,	-152(%rbp)
	mov %rbx,	-144(%rbp)
	mov 	$format0,	%rdi

	mov 	%r12,	%rsi

	mov %r12,	-184(%rbp)
	mov %r13,	-48(%rbp)
	mov %r14,	-168(%rbp)
	mov %r15,	-152(%rbp)
	mov %rbx,	-144(%rbp)
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
	.asciz	"%d\n"
