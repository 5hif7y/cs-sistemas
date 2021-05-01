# Macros especificos de NASM

### ¿Qué es un macro?

Macro es una unica instruccion que se expande hacia un conjunto de instrucciones predefinidas para realizar una tarea en particular.

Ej:
	/# mov rax, 60
exit =---# mov rdi, 0
	\# syscall

Ej cotidiano:


Cocinar un paty = comprar el paty, desembolsar el paty, vertir aceite en una sarten, prender el fuego, poner el paty, esperar, dar vuelta el paty, esperar, retirar el paty, fin.

### Definir macros:

<name>
	Nombre del macro
<argc>
	El numero de argumentos que el macro va a tomar.

<macro body>
	La definición del macro.

%macro <name> <argc>
	...
	<macro body>
	...
%endmacro


