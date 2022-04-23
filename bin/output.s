.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

<<<<<<< HEAD
	sub $480, %rsp
=======
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
>>>>>>> f46064f44295b67ae0152f4993fc10f1261dbe64


	mov	-8(%rbp), %rbx
	mov 	$1 ,	%rbx


	mov	-16(%rbp), %r15
	mov 	$4 ,	%r15


	mov	-24(%rbp), %r14
	mov 	$6 ,	%r14

	mov	-56(%rbp), %r13
	mov 	$0 ,	%r13

	sub	$7 ,	%r13


	mov	-48(%rbp), %r12
	mov 	%r13,	%r12


	mov	-64(%rbp), %r11
	mov 	$6 ,	%r11


	mov	-72(%rbp), %r10
	mov 	$7 ,	%r10

	mov %rbx,	-8(%rbp)
	mov	-104(%rbp), %rbx
	mov 	$0 ,	%rbx

	sub	$8 ,	%rbx


	mov %r15,	-16(%rbp)
	mov	-96(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r14,	-24(%rbp)
	mov	-136(%rbp), %r14
	mov 	$0 ,	%r14

	sub	$9 ,	%r14


	mov %r13,	-56(%rbp)
	mov	-128(%rbp), %r13
	mov 	%r14,	%r13


	mov %r12,	-48(%rbp)
	mov	-144(%rbp), %r12
	mov 	$10 ,	%r12

	mov %r11,	-64(%rbp)
	mov	-176(%rbp), %r11
	mov 	$0 ,	%r11

	sub	$11 ,	%r11


	mov %r10,	-72(%rbp)
	mov	-168(%rbp), %r10
	mov 	%r11,	%r10


	mov %rbx,	-104(%rbp)
	mov	-184(%rbp), %rbx
	mov 	$12 ,	%rbx


	mov %r15,	-96(%rbp)
	mov	-192(%rbp), %r15
	mov 	$13 ,	%r15

	mov %r14,	-136(%rbp)
	mov	-224(%rbp), %r14
	mov 	$0 ,	%r14

	sub	$292 ,	%r14


	mov %r13,	-128(%rbp)
	mov	-216(%rbp), %r13
	mov 	%r14,	%r13


	mov %r12,	-144(%rbp)
	mov	-232(%rbp), %r12
	mov 	$23 ,	%r12


	mov %r11,	-176(%rbp)
	mov	-240(%rbp), %r11
	mov 	$292 ,	%r11

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax

	mov %r10,	-168(%rbp)
	mov	-368(%rbp), %r10
	lea -8(%rbp),	%r10

	mov %rbx,	-184(%rbp)
	mov	-376(%rbp), %rbx
	lea -16(%rbp),	%rbx

	mov %r15,	-192(%rbp)
	mov	-384(%rbp), %r15
	lea -24(%rbp),	%r15

	mov %r14,	-224(%rbp)
	mov	-392(%rbp), %r14
	lea -48(%rbp),	%r14

	mov %r13,	-216(%rbp)
	mov	-400(%rbp), %r13
	lea -64(%rbp),	%r13

	mov %r12,	-232(%rbp)
	mov	-408(%rbp), %r12
	lea -72(%rbp),	%r12

	mov %r11,	-240(%rbp)
	mov	-416(%rbp), %r11
	lea -96(%rbp),	%r11

	mov %r10,	-368(%rbp)
	mov	-424(%rbp), %r10
	lea -128(%rbp),	%r10

	mov %rbx,	-376(%rbp)
	mov	-432(%rbp), %rbx
	lea -144(%rbp),	%rbx

	mov %r15,	-384(%rbp)
	mov	-440(%rbp), %r15
	lea -168(%rbp),	%r15

	mov %r14,	-392(%rbp)
	mov	-448(%rbp), %r14
	lea -184(%rbp),	%r14

	mov %r13,	-400(%rbp)
	mov	-456(%rbp), %r13
	lea -192(%rbp),	%r13

	mov %r12,	-408(%rbp)
	mov	-464(%rbp), %r12
	lea -216(%rbp),	%r12

	mov %r11,	-416(%rbp)
	mov	-472(%rbp), %r11
	lea -232(%rbp),	%r11

	mov %r10,	-424(%rbp)
	mov	-480(%rbp), %r10
	lea -240(%rbp),	%r10

# Debug: WB without flush
	mov %r10,	-480(%rbp)
	mov %r11,	-472(%rbp)
	mov %r12,	-464(%rbp)
	mov %r13,	-456(%rbp)
	mov %r14,	-448(%rbp)
	mov %r15,	-440(%rbp)
	mov %rbx,	-432(%rbp)
	mov 	$format0,	%rdi

<<<<<<< HEAD
	mov %rbx,	-432(%rbp)
	mov	-368(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov %r15,	-440(%rbp)
	mov	-376(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r14,	-448(%rbp)
	mov	-384(%rbp), %r14
	mov 	%r14,	%rcx

	mov %r13,	-456(%rbp)
	mov	-392(%rbp), %r13
	mov 	%r13,	%r8

	mov %r12,	-464(%rbp)
	mov	-400(%rbp), %r12
	mov 	%r12,	%r9

	mov %r11,	-472(%rbp)
	mov	-408(%rbp), %r11

	mov %r10,	-480(%rbp)
	mov	-416(%rbp), %r10

	mov %rbx,	-368(%rbp)
	mov	-424(%rbp), %rbx

	mov %r15,	-376(%rbp)
	mov	-432(%rbp), %r15

	mov %r14,	-384(%rbp)
	mov	-440(%rbp), %r14

	mov %r13,	-392(%rbp)
	mov	-448(%rbp), %r13

	mov %r12,	-400(%rbp)
	mov	-456(%rbp), %r12

	mov %r11,	-408(%rbp)
	mov	-464(%rbp), %r11

	mov %r10,	-416(%rbp)
	mov	-472(%rbp), %r10

	mov %rbx,	-424(%rbp)
	mov	-480(%rbp), %rbx

	mov %r10,	-472(%rbp)
	mov %r11,	-464(%rbp)
	mov %r12,	-456(%rbp)
	mov %r13,	-448(%rbp)
	mov %r14,	-440(%rbp)
	mov %r15,	-432(%rbp)
	mov %rbx,	-480(%rbp)
	push	-480(%rbp)
	push	-472(%rbp)
	push	-464(%rbp)
	push	-456(%rbp)
	push	-448(%rbp)
	push	-440(%rbp)
	push	-432(%rbp)
	push	-424(%rbp)
	push	-416(%rbp)
	push	-408(%rbp)
	xor	%rax,	%rax
	call	scanf
	pop %rax
	pop %rcx

# PRINT/SCAN CALL INCOMING
=======
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

>>>>>>> f46064f44295b67ae0152f4993fc10f1261dbe64
	push %rcx
	push %rax

# Debug: WB without flush
	mov 	$format2,	%rdi

	mov	-8(%rbp), %rbx
	mov 	%rbx,	%rsi

<<<<<<< HEAD
	mov	-16(%rbp), %r15
	mov 	%r15,	%rdx

	mov	-24(%rbp), %r14
	mov 	%r14,	%rcx

	mov	-48(%rbp), %r13
	mov 	%r13,	%r8

	mov	-64(%rbp), %r12
	mov 	%r12,	%r9

	mov	-72(%rbp), %r11

	mov	-96(%rbp), %r10

	mov %rbx,	-8(%rbp)
	mov	-128(%rbp), %rbx

	mov %r15,	-16(%rbp)
	mov	-144(%rbp), %r15

	mov %r14,	-24(%rbp)
	mov	-168(%rbp), %r14

	mov %r13,	-48(%rbp)
	mov	-184(%rbp), %r13

	mov %r12,	-64(%rbp)
	mov	-192(%rbp), %r12

	mov %r11,	-72(%rbp)
	mov	-216(%rbp), %r11

	mov %r10,	-96(%rbp)
	mov	-232(%rbp), %r10

	mov %rbx,	-128(%rbp)
	mov	-240(%rbp), %rbx

	mov %r10,	-232(%rbp)
	mov %r11,	-216(%rbp)
	mov %r12,	-192(%rbp)
	mov %r13,	-184(%rbp)
	mov %r14,	-168(%rbp)
	mov %r15,	-144(%rbp)
	mov %rbx,	-240(%rbp)
	push	-240(%rbp)
	push	-232(%rbp)
	push	-216(%rbp)
	push	-192(%rbp)
	push	-184(%rbp)
	push	-168(%rbp)
	push	-144(%rbp)
	push	-128(%rbp)
	push	-96(%rbp)
	push	-72(%rbp)
=======
	mov	-64(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r15,	-64(%rbp)
	mov %rbx,	-8(%rbp)
>>>>>>> f46064f44295b67ae0152f4993fc10f1261dbe64
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
<<<<<<< HEAD
	.asciz	"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
format2:
	.asciz	"Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n"
=======
	.asciz	"(i=%d) > (j=%d)\n"
format2:
	.asciz	"(i=%d) == (j=%d)\n"
format4:
	.asciz	"(i=%d) < (j=%d)\n"
>>>>>>> f46064f44295b67ae0152f4993fc10f1261dbe64
