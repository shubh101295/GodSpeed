.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $1000, %rsp



# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax
	sub $8, %rsp

# Debug: WB without flush
	mov 	$format0,	%rdi

	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx


	mov	-88(%rbp), %rbx
	mov 	$0 ,	%rbx

	mov %rbx,	-88(%rbp)
Label3:

	mov	-88(%rbp), %rbx
	mov	-120(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-120(%rbp)
	mov %rbx,	-88(%rbp)
	mov	-120(%rbp), %rbx
	cmp 	$5 ,	%rbx

	mov $0,%rbx
	setl %bl

	mov	-136(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-136(%rbp)
	mov %rbx,	-120(%rbp)
	mov	-136(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-136(%rbp)
	je	Label1

	lea	-80(%rbp), %rbx
	mov	-88(%rbp), %r14
	mov	%r14, %r15
	imulq	$8, %r15
	addq	%r15, %rbx
	mov	-152(%rbp), %r13
	mov %rbx,	%r13

	mov %r13,	-152(%rbp)
	mov %r14,	-88(%rbp)
	lea	-40(%rbp), %r12
	mov	%r14, %r11
	imulq	$8, %r11
	addq	%r11, %r12
	movq	%r13, (%r12)

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov %r13,	-152(%rbp)
	mov %r14,	-88(%rbp)
	mov 	$format2,	%rdi

	mov %r13,	-152(%rbp)
	mov %r14,	-88(%rbp)
	lea	-40(%rbp), %r10
	mov	%r14, %rbx
	imulq	$8, %rbx
	addq	%rbx, %r10
	mov	(%r10), %r10
	mov %r10,	%rsi

	mov %r13,	-152(%rbp)
	mov %r14,	-88(%rbp)
	xor	%rax,	%rax
	call	scanf
	pop %rax
	pop %rcx

Label2:

	mov	-88(%rbp), %rbx
	mov	-176(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-192(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-192(%rbp)
	mov %r15,	-176(%rbp)
	mov %rbx,	-88(%rbp)
	jmp	Label3

Label1:


	mov	-200(%rbp), %rbx
	mov 	$0 ,	%rbx

	mov %rbx,	-200(%rbp)
Label6:

	mov	-200(%rbp), %rbx
	mov	-232(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-232(%rbp)
	mov %rbx,	-200(%rbp)
	mov	-232(%rbp), %rbx
	cmp 	$5 ,	%rbx

	mov $0,%rbx
	setl %bl

	mov	-248(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-248(%rbp)
	mov %rbx,	-232(%rbp)
	mov	-248(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-248(%rbp)
	je	Label4

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format4,	%rdi

	lea	-80(%rbp), %rbx
	mov	-200(%rbp), %r14
	mov	%r14, %r15
	imulq	$8, %r15
	addq	%r15, %rbx
	mov	(%rbx), %rbx
	mov %rbx,	%rsi

	mov %r14,	-200(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label5:

	mov	-200(%rbp), %rbx
	mov	-272(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-288(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-288(%rbp)
	mov %r15,	-272(%rbp)
	mov %rbx,	-200(%rbp)
	jmp	Label6

Label4:

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format6,	%rdi

	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx


	mov	-296(%rbp), %rbx
	mov 	$0 ,	%rbx

	mov %rbx,	-296(%rbp)
Label16:

	mov	-296(%rbp), %rbx
	mov	-328(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-328(%rbp)
	mov %rbx,	-296(%rbp)
	mov	-328(%rbp), %rbx
	cmp 	$5 ,	%rbx

	mov $0,%rbx
	setl %bl

	mov	-344(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-344(%rbp)
	mov %rbx,	-328(%rbp)
	mov	-344(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-344(%rbp)
	je	Label7


	mov	-352(%rbp), %rbx
	mov 	$1 ,	%rbx

	mov %rbx,	-352(%rbp)
Label12:

	mov	-376(%rbp), %rbx
	mov 	$5 ,	%rbx

	mov	-296(%rbp), %r15
	sub	%r15,	%rbx

	mov	-400(%rbp), %r14
	mov 	%rbx,	%r14

	mov	-352(%rbp), %r13
	mov	-424(%rbp), %r12
	mov 	%r13,	%r12

	mov %r12,	-424(%rbp)
	mov %r13,	-352(%rbp)
	mov %r14,	-400(%rbp)
	mov %r15,	-296(%rbp)
	mov %rbx,	-376(%rbp)
	mov	-400(%rbp), %rbx
	mov	-424(%rbp), %r15
	cmp 	%rbx,	%r15

	mov $0,%r15
	setl %r15b

	mov	-440(%rbp), %r14
	mov 	%r15,	%r14

	mov %r14,	-440(%rbp)
	mov %r15,	-424(%rbp)
	mov %rbx,	-400(%rbp)
	mov	-440(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-440(%rbp)
	je	Label9

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format8,	%rdi

	mov	-296(%rbp), %rbx
	mov 	%rbx,	%rsi

	mov	-352(%rbp), %r15
	mov 	%r15,	%rdx

	mov %r15,	-352(%rbp)
	mov %rbx,	-296(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx


	lea	-80(%rbp), %rbx
	mov	-352(%rbp), %r14
	mov	%r14, %r15
	imulq	$8, %r15
	addq	%r15, %rbx
	mov	(%rbx), %rbx
	mov	-448(%rbp), %r13
	mov	%rbx,	%r13

	mov	-472(%rbp), %r12
	mov 	%r14,	%r12

	sub	$1 ,	%r12

	mov	-480(%rbp), %r11
	mov 	%r12,	%r11


	mov %r11,	-480(%rbp)
	mov %r12,	-472(%rbp)
	mov %r13,	-448(%rbp)
	mov %r14,	-352(%rbp)
	lea	-80(%rbp), %r10
	mov	%r11, %rbx
	imulq	$8, %rbx
	addq	%rbx, %r10
	mov	(%r10), %r10
	mov	-488(%rbp), %r15
	mov	%r10,	%r15

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


	mov %r14,	-352(%rbp)
	mov	-520(%rbp), %r14
	mov 	%r13,	%r14

	mov %r11,	-480(%rbp)
	mov %r12,	-472(%rbp)
	mov %r13,	-448(%rbp)
	mov %r14,	-520(%rbp)
	mov %r15,	-488(%rbp)
	mov	-488(%rbp), %rbx
	mov	-520(%rbp), %r15
	cmp 	%rbx,	%r15

	mov $0,%r15
	setl %r15b

	mov	-536(%rbp), %r14
	mov 	%r15,	%r14

# Debug: WB without flush
	mov %r14,	-536(%rbp)
	mov %r15,	-520(%rbp)
	mov %rbx,	-488(%rbp)
	mov 	$format10,	%rdi

	mov	-448(%rbp), %r13
	mov 	%r13,	%rsi

	mov 	%rbx,	%rdx

	mov 	%r14,	%rcx

	mov %r13,	-448(%rbp)
	mov %r14,	-536(%rbp)
	mov %r15,	-520(%rbp)
	mov %rbx,	-488(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

	mov	-448(%rbp), %rbx
	mov	-568(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-568(%rbp)
	mov %rbx,	-448(%rbp)
	mov	-488(%rbp), %rbx
	mov	-568(%rbp), %r15
	cmp 	%rbx,	%r15

	mov $0,%r15
	setl %r15b

	mov	-584(%rbp), %r14
	mov 	%r15,	%r14

	cmp $0, 	%r14
	mov %r14,	-584(%rbp)
	mov %r15,	-568(%rbp)
	mov %rbx,	-488(%rbp)
	je	Label11

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


	mov	-352(%rbp), %rbx
	mov	-608(%rbp), %r15
	mov 	%rbx,	%r15

	sub	$1 ,	%r15

	mov	-656(%rbp), %r14
	mov 	%r15,	%r14

	mov	-640(%rbp), %r13
	mov 	%rbx,	%r13

	sub	$1 ,	%r13

	mov	-648(%rbp), %r12
	mov 	%r13,	%r12

# Debug: WB without flush
	mov %r12,	-648(%rbp)
	mov %r13,	-640(%rbp)
	mov %r14,	-656(%rbp)
	mov %r15,	-608(%rbp)
	mov %rbx,	-352(%rbp)
	mov 	$format12,	%rdi

	mov 	%rbx,	%rsi

	mov 	%r14,	%rdx

	mov %r12,	-648(%rbp)
	mov %r13,	-640(%rbp)
	mov %r14,	-656(%rbp)
	mov %r15,	-608(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r11
	mov	%r12, %r10
	imulq	$8, %r10
	addq	%r10, %r11
	mov	(%r11), %r11
	mov %r11,	%rcx

	mov %r15,	-608(%rbp)
	mov %r13,	-640(%rbp)
	mov %r12,	-648(%rbp)
	mov %r14,	-656(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r15
	mov	%rbx, %r13
	imulq	$8, %r13
	addq	%r13, %r15
	mov	(%r15), %r15
	mov %r15,	%r8

	mov %r12,	-648(%rbp)
	mov %r14,	-656(%rbp)
	mov %rbx,	-352(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

	mov	-352(%rbp), %rbx
	mov	-680(%rbp), %r15
	mov 	%rbx,	%r15

	sub	$1 ,	%r15

	mov	-688(%rbp), %r14
	mov 	%r15,	%r14


	mov %r14,	-688(%rbp)
	mov %r15,	-680(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r13
	mov	%r14, %r12
	imulq	$8, %r12
	addq	%r12, %r13
	mov	(%r13), %r13
	mov	-696(%rbp), %r11
	mov	%r13,	%r11

	mov	-720(%rbp), %r10
	mov 	%rbx,	%r10

	sub	$1 ,	%r10

	mov %r15,	-680(%rbp)
	mov	-728(%rbp), %r15
	mov 	%r10,	%r15

	mov %r10,	-720(%rbp)
	mov %r11,	-696(%rbp)
	mov %r14,	-688(%rbp)
	mov %r15,	-728(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r13
	mov	%rbx, %r12
	imulq	$8, %r12
	addq	%r12, %r13
	mov	(%r13), %r13
	mov %r14,	-688(%rbp)
	mov %r11,	-696(%rbp)
	mov %r10,	-720(%rbp)
	mov %r15,	-728(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r14
	mov	%r15, %r11
	imulq	$8, %r11
	addq	%r11, %r14
	movq	%r13, (%r14)

	mov %r10,	-720(%rbp)
	mov	-696(%rbp), %r10
	mov %r10,	-696(%rbp)
	mov %r15,	-728(%rbp)
	mov %rbx,	-352(%rbp)
	lea	-80(%rbp), %r13
	mov	%rbx, %r12
	imulq	$8, %r12
	addq	%r12, %r13
	movq	%r10, (%r13)

	mov %r10,	-696(%rbp)
	mov %r15,	-728(%rbp)
	mov %rbx,	-352(%rbp)
Label11:

Label10:

	mov	-352(%rbp), %rbx
	mov	-752(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-768(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-768(%rbp)
	mov %r15,	-752(%rbp)
	mov %rbx,	-352(%rbp)
	jmp	Label12

Label9:


	mov	-776(%rbp), %rbx
	mov 	$0 ,	%rbx

	mov %rbx,	-776(%rbp)
Label15:

	mov	-776(%rbp), %rbx
	mov	-808(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-808(%rbp)
	mov %rbx,	-776(%rbp)
	mov	-808(%rbp), %rbx
	cmp 	$5 ,	%rbx

	mov $0,%rbx
	setl %bl

	mov	-824(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-824(%rbp)
	mov %rbx,	-808(%rbp)
	mov	-824(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-824(%rbp)
	je	Label13

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format14,	%rdi

	lea	-80(%rbp), %rbx
	mov	-776(%rbp), %r14
	mov	%r14, %r15
	imulq	$8, %r15
	addq	%r15, %rbx
	mov	(%rbx), %rbx
	mov %rbx,	%rsi

	mov %r14,	-776(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label14:

	mov	-776(%rbp), %rbx
	mov	-848(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-864(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-864(%rbp)
	mov %r15,	-848(%rbp)
	mov %rbx,	-776(%rbp)
	jmp	Label15

Label13:

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format16,	%rdi

	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label8:

	mov	-296(%rbp), %rbx
	mov	-888(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-904(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-904(%rbp)
	mov %r15,	-888(%rbp)
	mov %rbx,	-296(%rbp)
	jmp	Label16

Label7:


	mov	-912(%rbp), %rbx
	mov 	$0 ,	%rbx

	mov %rbx,	-912(%rbp)
Label19:

	mov	-912(%rbp), %rbx
	mov	-944(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-944(%rbp)
	mov %rbx,	-912(%rbp)
	mov	-944(%rbp), %rbx
	cmp 	$5 ,	%rbx

	mov $0,%rbx
	setl %bl

	mov	-960(%rbp), %r15
	mov 	%rbx,	%r15

	mov %r15,	-960(%rbp)
	mov %rbx,	-944(%rbp)
	mov	-960(%rbp), %rbx
	cmp 	$0 ,	%rbx

	mov %rbx,	-960(%rbp)
	je	Label17

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format18,	%rdi

	lea	-80(%rbp), %rbx
	mov	-912(%rbp), %r14
	mov	%r14, %r15
	imulq	$8, %r15
	addq	%r15, %rbx
	mov	(%rbx), %rbx
	mov %rbx,	%rsi

	mov %r14,	-912(%rbp)
	xor	%rax,	%rax
	call	printf
	pop %rax
	pop %rcx

Label18:

	mov	-912(%rbp), %rbx
	mov	-984(%rbp), %r15
	mov 	%rbx,	%r15

	add	$1 ,	%r15

	mov	-1000(%rbp), %r14
	mov 	%r15,	%r14

	mov 	%r14,	%rbx

	mov %r14,	-1000(%rbp)
	mov %r15,	-984(%rbp)
	mov %rbx,	-912(%rbp)
	jmp	Label19

Label17:

# PRINT/SCAN CALL INCOMING
	push %rcx
	push %rax


# Debug: WB without flush
	mov 	$format20,	%rdi

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
	.asciz	"Enter 5 elements : "
format2:
	.asciz	"%d"
format4:
	.asciz	"%d "
format6:
	.asciz	"\n"
format8:
	.asciz	"Working on i=%d j=%d\n"
format10:
	.asciz	"%d %d %d\n"
format12:
	.asciz	"Swapping %d and %d ,  b[j-1]=%d and b[j]=%d\n"
format14:
	.asciz	"%d "
format16:
	.asciz	"\n"
format18:
	.asciz	"%d "
format20:
	.asciz	"\n"
