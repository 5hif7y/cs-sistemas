#include<stdio.h>
#include<stdlib.h>

int main(){

	/* const int num = 5;
	 * este valor es inmodificable y de descomentarlo, num = 8; dara error
	*/
	int num = 5;
	printf("%d \n", num);
	num = 8;
	printf("%d \n", num)

	// los strings tambien se consideran constantes
	printf("Hola que tal \n");	

	// si se introduce una funcion y se define a continuacion,
	// tambien se considera una constante
	printf("%d \n", 70);
	return 0;
}
