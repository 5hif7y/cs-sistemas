#include <stdio.h>
#include <stdlib.h>

int main(){
	

	char nombre[30];
	printf("Ingrese su nombre completo: ");
	
	fflush(stdout); //Limpieza de stdout	

	fgets(nombre, 30, stdin);
	printf("Tu nombre es %s", nombre);
	
	int edad;
	printf("Ingrese su edad: ");
	fflush(stdout); //Limpieza de stdout
	scanf("%d", &edad);
	printf("Usted tiene %d años.\n", edad);

	double promedio;
	printf("Ingrese su promedio: ");
	fflush(stdout); //Limpieza de stdout
	scanf("%lf", &promedio);
	printf("Su promedio es %f\n", promedio);

	char nota;				//
	printf("Ingrese su nota alfabetica: "); //
	fflush(stdout); //Limpieza de stdout	// El codigo se rompe aca, no entiendo porque
	scanf("%c", &nota);			//
	printf("Tu nota es: %c", nota);		//

	/*
	 * printf("Enter your name: ");
	 * scanf solo detecta una palabra,
	 * no detecta lo que siga despues de un espacio
	 * scanf("%s", name);
	 * fgets puede recibir una linea
	 */	

	/*
	 * para "prinf" los argumentos de tipo "float" son promovidos a "double", entonces ambos "%f" y "%lf" son usados para "double"
	 * para "scanf" los argumentos se mantienen y se debe de usar "%f" para "float" y "%lf" para "double"
	 *
	 * Mas info en ingles: https://stackoverflow.com/questions/25860850/what-is-the-difference-between-f-and-lf-in-c#answer-25860877
	 */

	return 0;
}




