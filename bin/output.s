.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $288, %rsp


	mov	-8(%rbp), %rbx
	mov 	$2 ,	%rbx

	mov %rbx,	-8(%rbp)
Label10:

	mov	-8(%rbp), %rbx
	mov	-40(%rbp), %r15
	mov 	%rbx,	%r15

	cmp 	$5 ,	%r15

	mov $0,%r15
	setle %r15b

	mov	-56(%rbp), %r14
	mov 	%r15,	%r14

	cmp 	$0 ,	%r14

	mov %r14,	-56(%rbp)
	mov %r15,	-40(%rbp)
	mov %rbx,	-8(%rbp)
	je	Label1


	mov	-64(%rbp), %rbx
	mov 	$4 ,	%rbx

	mov %rbx,	-64(%rbp)
Label9:

	mov	-64(%rbp), %rbx
	mov	-96(%rbp), %r15
	mov 	%rbx,	%r15

	cmp 	$2 ,	%r15

	mov $0,%r15
	setne %r15b

	mov	-112(%rbp), %r14
	mov 	%r15,	%r14

	cmp 	$0 ,	%r14

	mov %r14,	-112(%rbp)
	mov %r15,	-96(%rbp)
	mov %rbx,	-64(%rbp)
	je	Label3

	mov	-8(%rbp), %rbx
	mov	-144(%rbp), %r15
	mov 	%rbx,	%r15

	mov	-64(%rbp), %r14
	cmp 	%r14,	%r15

	mov $0,%r15
	setg %r15b

	mov	-160(%rbp), %r13
	mov 	%r15,	%r13

	cmp $0, 	%r13
	mov %r13,	-160(%rbp)
	mov %r14,	-64(%rbp)
	mov %r15,	-144(%rbp)
	mov %rbx,	-8(%rbp)
	je	Label7

	push %rcx
	push %rax

# Debug: WB without flush
	mov 	$format0,	%rdi

	mov	-8(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov	-64(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r15,	-64(%rbp)
	mov %rbx,	-8(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

	jmp	Label8

Label7:

	mov	-8(%rbp), %rbx
	mov	-192(%rbp), %r15
	mov 	%rbx,	%r15

	mov	-64(%rbp), %r14
	cmp 	%r14,	%r15

	mov $0,%r15
	sete %r15b

	mov	-208(%rbp), %r13
	mov 	%r15,	%r13

	cmp $0, 	%r13
	mov %r13,	-208(%rbp)
	mov %r14,	-64(%rbp)
	mov %r15,	-192(%rbp)
	mov %rbx,	-8(%rbp)
	je	Label5

	push %rcx
	push %rax

# Debug: WB without flush
	mov 	$format2,	%rdi

	mov	-8(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov	-64(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r15,	-64(%rbp)
	mov %rbx,	-8(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

	jmp	Label6

Label5:

	push %rcx
	push %rax

# Debug: WB without flush
	mov 	$format4,	%rdi

	mov	-8(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov	-64(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r15,	-64(%rbp)
	mov %rbx,	-8(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label6:

Label8:

Label4:

	mov	-64(%rbp), %rbx
	mov	-232(%rbp), %r15
	mov 	%rbx,	%r15

	sub	$1 ,	%r15

	mov	-248(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-248(%rbp)
	mov %r15,	-232(%rbp)
	mov %rbx,	-64(%rbp)
	jmp	Label9

Label3:

Label2:

	mov	-8(%rbp), %rbx
	mov	-272(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-288(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-288(%rbp)
	mov %r15,	-272(%rbp)
	mov %rbx,	-8(%rbp)
	jmp	Label10

Label1:


	mov %rbp, %rsp
	pop %rbp
	ret

	mov $60, %rax
	xor %rdi, %rdi
	syscall

.data
format0:
	.asciz	"(i=%d) > (j=%d)\n"
format2:
	.asciz	"(i=%d) == (j=%d)\n"
format4:
	.asciz	"(i=%d) < (j=%d)\n"
