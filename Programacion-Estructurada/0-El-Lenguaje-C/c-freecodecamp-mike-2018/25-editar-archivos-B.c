#include<stdio.h>
#include<stdlib.h>

	// creo que no es conveniente escribir esto en español
	// entonces des-resumo y lo igualo en español:

	// fpointer = file, pointer = archivo, puntero
	// fopen = file, open = archivo, abrir
	// fclose = file, close = archivo, cerrar
        // r = read = leer
        // w = write = escribir.
        // a = append = adjuntar/añadir
	// fprintf = file, printf function = archivo, función printf
	
int main()
{
FILE * fpointer = fopen("26-empleados.txt", "a" ); // adjuntar en el archivo *.txt

	fprintf(fpointer, "\nKatia, Servicio al cliente.");	

	fclose(fpointer);

	return 0;
}
