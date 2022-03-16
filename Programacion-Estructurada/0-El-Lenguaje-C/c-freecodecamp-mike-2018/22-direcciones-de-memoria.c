#include <stdio.h>
#include <stdlib.h>

int main(){
	int edad = 30;
	double promedio = 3.4;
	char grado = 'A';

	printf("edad: %p\npromedio: %p\ngrado: %p", &edad, &promedio, &grado);
	

	return 0;
}
