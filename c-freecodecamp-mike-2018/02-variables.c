#include<stdio.h>
#include<stdlib.h>

int main(){
	// ejemplo sin variables
	//printf("Habia una vez un hombre llamado Juan Salvo\n");
	//printf("el tenia 80 años.\n");
	//printf("A el le encantaba su nombre Juan Salvo\n");
	//printf("pero no le gustaba tener 80.\n");


	// ejemplo con variables	
	char personajeNombre[] = "Juan";
	int personajeEdad = 35;

	printf("Habia una vez un hombre llamado %s \n", personajeNombre);
	printf("el tenia %d años.\n", personajeEdad);
	printf("A el le encantaba su nombre, '%s' \n", personajeNombre);
	printf("pero no le gustaba tener %d. \n", personajeEdad);


	return 0;
}
