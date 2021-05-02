#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//imprimir dos lineas
	//imprimir caracteres que normalmente romperian el codigo

	// imprimir numeros enteros
	printf("Mi numero favorito es %d \n", 500);
	// imprimir enteros y strings
	printf("Mi %s favorito es %d \n", "numero", 500);
	// imprimir decimales y strings
	printf("Mi %s favorito es %f \n", "numero", 69.69);
	// imprimir enteros desde variables y strings.
	int numFav = 21;
	printf("Mi %s favorito es %d \n", "numero", numFav);
	// imprimir enteros desde variables y caracter desde variables.
	char miCaracter = 'E';
	numFav = 71;
	printf("Mi id %c favorita es %d \n", miCaracter, numFav);

	return 0;
}
