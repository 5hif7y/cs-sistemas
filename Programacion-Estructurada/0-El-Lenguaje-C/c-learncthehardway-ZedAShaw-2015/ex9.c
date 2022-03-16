#include <stdio.h>

/*
 * Sintaxis de un while-loop
 * while(TEST) {
 * 	CODE;
 * }
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < 25) {
		printf("%d",i);
		i++;
	}
	return 0;
}
