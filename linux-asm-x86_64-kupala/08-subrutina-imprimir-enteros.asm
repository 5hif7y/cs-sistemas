section .bss
	espaciodigitos resb 100
	posespaciodigitos resb 8


section .text
	global _start

_start:

	mov rax, 123
	call _imprimirRAX	
	
	mov rax, 60
	mov rdi, 0
	syscall

_imprimirRAX:
	mov rcx, espaciodigitos
	mov rbx, 10
	mov [rcx], rbx
	inc rcx
	mov [posespaciodigitos], rcx

_imprimirbucleRAX:
	mov rdx, 0
	mov rbx, 10
	div rbx
	push rax
	add rdx, 48

	mov rcx, [posespaciodigitos]
	mov [rcx], dl
	inc rcx
	mov [posespaciodigitos], rcx

	pop rax
	cmp rax, 0
	jne _imprimirbucleRAX

_imprimirbucleRAX2:
	mov rcx, [posespaciodigitos]

	mov rax, 1
	mov rdi, 1
	mov rsi, rcx
	mov rdx, 1
	syscall

	mov rcx, [posespaciodigitos]
	dec rcx,
	mov [posespaciodigitos], rcx

	cmp rcx, espaciodigitos
	jge _imprimirbucleRAX2
	ret
