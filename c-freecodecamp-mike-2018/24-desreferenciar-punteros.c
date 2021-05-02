#include<stdlib.h>
#include<stdio.h>

int main()
{
	int edad = 30;
	int *Pedad= &edad;

	// Cuando referenciamos con * obtenemos el valor numerico
	// Cuando desreferenciamos con & obtenemos la direccion de la memoria

	
	printf("%d",*&*&edad);	//printf("%d", &*&edad);	//printf("%d", *&edad);
	//salida=30		//salida = 1904211732	// salida = 30


	//printf("%d", *&Pedad);	//printf("%d", *Pedad);	//printf("%p", Pedad);
	// salida =-1354760708		// salida = 30		// salida = 000000f39adffad4	
	return 0;

}
