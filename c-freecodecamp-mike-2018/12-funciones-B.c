#include <stdio.h>
#include <stdlib.h>


void saludar(char name[], int age){
	printf("Hola %s, tenes %d\n", name, age);
}

int main()
{
	saludar("Matu", 23);
	saludar("Pepo", 18);
	saludar("Fulano", 39);
	return 0;
}

