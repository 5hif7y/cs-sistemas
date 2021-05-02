
# Tutorial:
https://www.youtube.com/playlist?list=PLetF-YjXm-sCH6FrTz4AQhfH6INDQvQSn

### Compilar con nasm

nasm -f elf64 -o hello.o hello.asm

nasm -f tipodearchivo archivo de entrada -o archivo-de-salida.obj
nasm -f FILETYPE -o OUTPUTFILE INPUTFILE

### Archivos tipo OBJETO
estos pueden terminar en \*.o o en \*.obj

### El orden de entrada y salida no importa

nasm -f elf64 -o hello.o hello.asm
nasm -f elf64 hello.asm -o hello.o

### Crear el ejecutable

Usar ld para conectarle librerias y generar binario ejecutable

ld archivo-de-entrada.obj -o archivo-de-salida-ejecutable
ld INPUTFILE -o OUTPUTFILE

los objetos .o\* ya no son utiles despues de compilar, se pueden borrar.
