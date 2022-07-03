#include <stdio.h>

int main(void)
{
	int valorA = 0; // zero é falso
	int valorB = 1; // qualquer coisa diferente de zero é verdadeiro
    
    if (valorA) {
		printf("A é verdadeiro");
	} else {
		printf("A é falso");
	}
	
	printf("\n");
	
	if (valorB) {
		printf("B é verdadeiro");
	} else {
		printf("B é falso");
	}
	
	return 0;
}
