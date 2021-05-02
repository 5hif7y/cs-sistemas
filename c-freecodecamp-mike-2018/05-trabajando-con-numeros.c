#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	printf("%f \n", 8.9);

	printf("%f \n", 5.0 + 4.5);

	printf("%d \n", 5/4);

	printf("%d \n", 5/4.0);

	printf("%f \n", 5/4.0);

	int num = 6;
	printf("%d \n", num);

	// se necesita incluir math.h
	//potencias: 2 a la 3ra
	printf("%f \n", pow(2, 3));
	//raices: raiz cuadrada de 36
	printf("%f \n", sqrt(36));
	//redondear numeros decimales para arriba
	//ceil=techo en ingles
	printf("%f \n", ceil(36.356));	
	//redondear numeros decimales para abajo
	//floor=piso en ingles
	printf("%f \n", floor(36.356));

	return 0;
}
