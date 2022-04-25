.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $88, %rsp


	mov	-8(%rbp), %rbx
	mov 	$25 ,	%rbx

	mov	-40(%rbp), %r15
	mov 	$0 ,	%r15

	sub	$5 ,	%r15


	mov	-32(%rbp), %r14
	mov 	%r15,	%r14

	mov	-72(%rbp), %r13
	mov 	%rbx,	%r13

	cmp 	$1 ,	%r13

	mov $0,%r13
	sete %r13b

	mov	-88(%rbp), %r12
	mov 	%r13,	%r12

	cmp $0, 	%r12
	mov %r12,	-88(%rbp)
	mov %r13,	-72(%rbp)
	mov %r14,	-32(%rbp)
	mov %r15,	-40(%rbp)
	mov %rbx,	-8(%rbp)
	sub $8, %rsp
	je	Label1

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format0,	%rdi

	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label1:


	mov %rbp, %rsp
	pop %rbp
	ret

	mov $60, %rax
	xor %rdi, %rdi
	syscall

.data
format0:
	.asciz	"HELLO\n"
