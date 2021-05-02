#include <stdio.h>
#include <stdlib.h>

int main (){

	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

	//sobreescribir la matriz
	//luckyNumbers[1] = 200;
	//sobreescribe 8 por 200

	printf("%d", luckyNumbers[0]);	

	int happyNumbers[4];

	happyNumbers[0] = 11;
	happyNumbers[1] = 17;
	happyNumbers[2] = 23;
	happyNumbers[3] = 27;

	printf("%d", happyNumbers[0, 1, 2, 3]);

	return 0;
}
