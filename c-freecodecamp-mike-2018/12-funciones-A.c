#include <stdio.h>
#include <stdlib.h>

/*
void *sayHi(){
	printf("Top\n");
	printf("Hallo!!\n");
	printf("bottom\n");
	return 0;
}
*/
/*
void Saludar(char name[], int age){
	printf("Hello %s, you are %d\n", name);
}
*/

void saludar(char name[]){
	printf("Hola %s\n", name);
}

int main()
{
//	sayHi();
	saludar("Matu");
	saludar("Pepo");
	saludar("Fulano");
	return 0;
}


