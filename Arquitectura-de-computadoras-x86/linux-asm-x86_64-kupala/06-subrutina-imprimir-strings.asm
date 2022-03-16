section	.data
	texto1 db "Hola Mundo",10,0
	texto2 db "¿Mundo?",10,0

section .text
	global _start

_start:
	mov rax, texto1
	call _imprimir

	mov rax, texto2
	call _imprimir	

	mov rax, 60
	mov rdi, 0
	syscall

;input: rax como puntero al string
;output: imprimir string en rax

_imprimir:
	push rax
	mov rbx, 0

_imprimirbucle:
	inc rax
	inc rbx
	mov cl, [rax]
	cmp cl, 0
	jne _imprimirbucle

	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscall
	ret
	
