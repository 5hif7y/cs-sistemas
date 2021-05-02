# Tutorial de programación C para principiantes

reescritos de:

![logo-freecodecamp.org](https://yt3.ggpht.com/ytc/AAUvwnifaQZvAunS0OFb2y_cieoVjLCVjqQW8Exf3BC1gg=s88-c-k-c0x00ffffff-no-rj) https://www.youtube.com/watch?v=KJgsSFOSQv0 [freeCodeCamp.org]

15 agosto 2018 - Mike Dane



| n    | Temario en ingles | Temario en español |
| ---- | -------------- | --------------- |
|00 (0:09:04) | Hello World|Hola Mundo|
|01 (0:12:51) |Drawing a Shape|Dibujar una figura|
|02 (0:20:56) | Variables|Variables|
|03 (0:32:25) | Data Types|Tipos de datos|
|04 (0:38:32) | Printf|"Printf"|
|05 (0:45:22) | Working With Numbers|Trabajando con números|
|06 (0:52:20) | Comments|Comentarios|
|07 (0:56:00) | Constants|Constantes|
|08 (1:00:13) | Getting User Input|Obtener input del usuario|
|09 (1:12:08) | Building a Basic Calculator|Hacer una Calculadora básica|
|10 (1:17:43) | Building a Mad Libs Game|Hacer un juego de libs locos|
|11 (1:26:29) | Arrays|Matrices|
|12 (1:36:44) | Functions|Funciones|
|13 (1:45:37) | Return Statement|Declaración "Return"|
|14 (1:53:21) | If Statements|Declaración "If"|
|15 (2:07:11) | Building a Better Calculator|Hacer una Calculadora mejor|
|16 (2:14:51) | Switch Statements|Declaración "Switch"|
|17 (2:21:27) | Structs|Estructuras|
|18 (2:29:43) | While Loops|Bucle "While"|
|19 (2:37:48) | Building a Guessing Game|Hacer un juego de adivinanzas|
|20 (2:50:11) | For Loops|Bucle "For"|
|21 (2:59:05) | 2D Arrays & Nested Loops|Matrices 2D y bucles anidados|
|22 (3:09:10) | Memory Addresses|Direcciones de memoria|
|23 (3:17:20) | Pointers|Punteros|
|24 (3:27:41) | Dereferencing Pointers|Desreferenciar punteros|
|25 (3:32:37) | Writing Files|Editar archivos|
|26 (3:41:52) | Reading Files|Leer archivos|





## Advertencias sobre los ejemplos:



### Incompletos: falta reescribir ejemplos para hispanohablantes

* 10-madlibs (no se juega a esto en nuestra cultura, después reemplazo por algo cotidiano, algún juego de mesa viejo, etc.)
* 15-calculadora-mejorada
* 16-declaraciones-switch
* 17-estructuras
* 18-bucle-while
* 19-crear-un-juego-tipo-cuestionario
* 20-bucle-for



### Ejemplo 08: obtener input del usuario

Todo funciona bien, pero se rompe el código al momento de pedir que el usuario ingrese su nota alfabética.



### Ejemplo 25: editar archivos

* El primer programa "**25-editar-archivos-A.c**" crea un archivo "25-empleados.txt" y le imprime el siguiente contenido:
  ```
  Juan, Ventas.
  Pamela, Administración.
  Oscar, Contaduría.
  ```



* El segundo programa "**25-editar-archivos-B.c**" adjunta información al archivo "25-empleados.txt" y le imprime el siguiente contenido:
  ```Katia, Servicio al cliente.```



* El .txt al final, después de pasar por las modificaciones de ambos programas, debe dar este contenido:
  ```
  Juan, Ventas.
  Pamela, Administración.
  Oscar, Contaduría.
  Katia, Servicio al cliente.
  ````

### Ejemplo 26: leer archivos

El código esta bien, pero es ineficiente tengo que buscar otro método que requiera menos escritura o por lo menos; menor redundancia.

Este imprime por filas enteras dependiendo de cuantos "fgets(line, 255, fpointer);" escribamos, imprime X fila.

Si escribo 1 solo "fgets(line, 255, fpointer);"" = Imprime la fila de Juan

2 * "fgets(line, 255, fpointer);" = imprime la fila de Pamela

3 * "fgets(line, 255, fpointer);" = imprime la fila de Oscar

4 * "fgets(line, 255, fpointer);" = imprime la fila de Katia

