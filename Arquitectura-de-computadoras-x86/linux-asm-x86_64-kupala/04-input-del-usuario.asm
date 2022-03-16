section	.data
	texto1 db "¿Cual es tu nombre? "
	texto2 db "Hola, "

section .bss
	nombre resb 16

section .text
	global _start

_start:

	call _imprimirtexto1
	call _obtenernombre
	call _imprimirtexto2
	call _imprimirnombre

	mov rax, 60
	mov rdi, 0
	syscall

_imprimirtexto1:
	mov rax, 1
	mov rdi, 1
	mov rsi, texto1
	mov rdx, 21
	syscall
	ret

_obtenernombre:
	mov rax, 0
	mov rdi, 0
	mov rsi, nombre
	mov rdx, 16
	syscall
	ret

_imprimirtexto2:
	mov rax, 1
	mov rdi, 1
	mov rsi, texto2
	mov rdx, 6
	syscall
	ret

_imprimirnombre:
	mov rax, 1
	mov rdi, 1
	mov rsi, nombre
	mov rdx, 16
	syscall
	ret

