.global main

.bss

.text


plsm_print:

	push %rbp
	mov %rsp, %rbp

	sub $120, %rsp

	mov	-8(%rbp), %rbx
	mov %rdi, 	%rbx

	mov	-16(%rbp), %r15
	mov %rsi, 	%r15

	mov	-24(%rbp), %r14
	mov %rdx, 	%r14

	mov	-32(%rbp), %r13
	mov %rcx, 	%r13

	mov	-40(%rbp), %r12
	mov %r8, 	%r12

	mov	-48(%rbp), %r11
	mov %r9, 	%r11

	mov	-56(%rbp), %r10
	mov 16(%rbp), 	%r10

	mov %rbx,	-8(%rbp)
	mov	-64(%rbp), %rbx
	mov 24(%rbp), 	%rbx

	mov %r15,	-16(%rbp)
	mov	-72(%rbp), %r15
	mov 32(%rbp), 	%r15

	mov %r14,	-24(%rbp)
	mov	-80(%rbp), %r14
	mov 40(%rbp), 	%r14

	mov %r13,	-32(%rbp)
	mov	-88(%rbp), %r13
	mov 48(%rbp), 	%r13

	mov %r12,	-40(%rbp)
	mov	-96(%rbp), %r12
	mov 56(%rbp), 	%r12

	mov %r11,	-48(%rbp)
	mov	-104(%rbp), %r11
	mov 64(%rbp), 	%r11

	mov %r10,	-56(%rbp)
	mov	-112(%rbp), %r10
	mov 72(%rbp), 	%r10

	mov %rbx,	-64(%rbp)
	mov	-120(%rbp), %rbx
	mov 80(%rbp), 	%rbx

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax
	sub $8, %rsp

# Debug: WB without flush
	mov %r10,	-112(%rbp)
	mov %r11,	-104(%rbp)
	mov %r12,	-96(%rbp)
	mov %r13,	-88(%rbp)
	mov %r14,	-80(%rbp)
	mov %r15,	-72(%rbp)
	mov %rbx,	-120(%rbp)
	mov 	$format0,	%rdi

	mov %r15,	-72(%rbp)
	mov	-8(%rbp), %r15
	mov 	%r15,	%rsi

	mov %r14,	-80(%rbp)
	mov	-16(%rbp), %r14
	mov 	%r14,	%rdx

	mov %r13,	-88(%rbp)
	mov	-24(%rbp), %r13
	mov 	%r13,	%rcx

	mov %r12,	-96(%rbp)
	mov	-32(%rbp), %r12
	mov 	%r12,	%r8

	mov %r11,	-104(%rbp)
	mov	-40(%rbp), %r11
	mov 	%r11,	%r9

	mov %r10,	-112(%rbp)
	mov	-48(%rbp), %r10

	mov %rbx,	-120(%rbp)
	mov	-56(%rbp), %rbx

	mov %r15,	-8(%rbp)
	mov	-64(%rbp), %r15

	mov %r14,	-16(%rbp)
	mov	-72(%rbp), %r14

	mov %r13,	-24(%rbp)
	mov	-80(%rbp), %r13

	mov %r12,	-32(%rbp)
	mov	-88(%rbp), %r12

	mov %r11,	-40(%rbp)
	mov	-96(%rbp), %r11

	mov %r10,	-48(%rbp)
	mov	-104(%rbp), %r10

	mov %rbx,	-56(%rbp)
	mov	-112(%rbp), %rbx

	mov %r15,	-64(%rbp)
	mov	-120(%rbp), %r15

	mov %r10,	-104(%rbp)
	mov %r11,	-96(%rbp)
	mov %r12,	-88(%rbp)
	mov %r13,	-80(%rbp)
	mov %r14,	-72(%rbp)
	mov %r15,	-120(%rbp)
	mov %rbx,	-112(%rbp)
	push	-120(%rbp)
	push	-112(%rbp)
	push	-104(%rbp)
	push	-96(%rbp)
	push	-88(%rbp)
	push	-80(%rbp)
	push	-72(%rbp)
	push	-64(%rbp)
	push	-56(%rbp)
	push	-48(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx


	mov %rbp, %rsp
	pop %rbp
	ret

main:

	push %rbp
	mov %rsp, %rbp

	sub $480, %rsp


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
<<<<<<< HEAD


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
	mov 	$format2,	%rdi

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
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format4,	%rdi

	mov	-8(%rbp), %rbx
	mov 	%rbx,	%rsi

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
=======


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


# Debug: WB without flush
	mov %r10,	-168(%rbp)
	mov %r11,	-240(%rbp)
	mov %r12,	-232(%rbp)
	mov %r13,	-216(%rbp)
	mov %r14,	-224(%rbp)
	mov %r15,	-192(%rbp)
	mov %rbx,	-184(%rbp)
	mov %r10,	-168(%rbp)
	mov	-8(%rbp), %r10
	mov 	%r10,	%rdi

	mov %rbx,	-184(%rbp)
	mov	-16(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov %r15,	-192(%rbp)
	mov	-24(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r14,	-224(%rbp)
	mov	-48(%rbp), %r14
	mov 	%r14,	%rcx

	mov %r13,	-216(%rbp)
	mov	-64(%rbp), %r13
	mov 	%r13,	%r8

	mov %r12,	-232(%rbp)
	mov	-72(%rbp), %r12
	mov 	%r12,	%r9

	mov %r11,	-240(%rbp)
	mov	-96(%rbp), %r11

	mov %r10,	-8(%rbp)
	mov	-128(%rbp), %r10

	mov %rbx,	-16(%rbp)
	mov	-144(%rbp), %rbx

	mov %r15,	-24(%rbp)
	mov	-168(%rbp), %r15

	mov %r14,	-48(%rbp)
	mov	-184(%rbp), %r14

	mov %r13,	-64(%rbp)
	mov	-192(%rbp), %r13

	mov %r12,	-72(%rbp)
	mov	-216(%rbp), %r12

	mov %r11,	-96(%rbp)
	mov	-232(%rbp), %r11

	mov %r10,	-128(%rbp)
	mov	-240(%rbp), %r10

	mov %r10,	-240(%rbp)
	mov %r11,	-232(%rbp)
	mov %r12,	-216(%rbp)
	mov %r13,	-192(%rbp)
	mov %r14,	-184(%rbp)
	mov %r15,	-168(%rbp)
	mov %rbx,	-144(%rbp)
>>>>>>> 2fd2e30258f04d69ba77157d6ba6bc837f24be99
	push	-240(%rbp)
	push	-232(%rbp)
	push	-216(%rbp)
	push	-192(%rbp)
	push	-184(%rbp)
	push	-168(%rbp)
	push	-144(%rbp)
	push	-128(%rbp)
	push	-96(%rbp)
<<<<<<< HEAD
	push	-72(%rbp)
=======
>>>>>>> 2fd2e30258f04d69ba77157d6ba6bc837f24be99
	xor	%rax,	%rax
	call	plsm_print


	mov %rbp, %rsp
	pop %rbp
	ret

	mov $60, %rax
	xor %rdi, %rdi
	syscall

.data
format0:
	.asciz	"Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n"
<<<<<<< HEAD
format2:
	.asciz	"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
format4:
	.asciz	"Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n"
=======
>>>>>>> 2fd2e30258f04d69ba77157d6ba6bc837f24be99
