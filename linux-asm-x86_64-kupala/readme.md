
# Tutorial:
https://www.youtube.com/playlist?list=PLetF-YjXm-sCH6FrTz4AQhfH6INDQvQSn

compilar con nasm

nasm -f elf64 -o hello.o hello.asm

nasm -f FILETYPE -o OUTPUTFILE INPUTFILE


Usar ld para conectarle librerias y generar binario ejecutable

ld INPUTFILE -o OUTPUTFILE


los objetos .o\* ya no son utiles despues de compilar, se pueden borrar.


