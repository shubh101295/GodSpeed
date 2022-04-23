.global main

.bss

.text


main:

	push %rbp
	mov %rsp, %rbp

	sub $0, %rsp

	push %rcx
	push %rax

# Debug: WB without flush
	mov 	$format0,	%rdi

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
	.asciz	"Hello World\n"
