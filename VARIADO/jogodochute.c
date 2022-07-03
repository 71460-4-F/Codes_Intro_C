//jogo do chute//
#include <stdio.h>
int main ()
{
	int j1, j2;
	printf("  J O G O   D O   C H U T E    (By Tiago)\n\n");
	printf ("Jogador1 digite um valor: "); //jogador1//
	scanf ("%d", &j1);
	
	printf("Jogador2 digite um valor: "); //jogador2//
	scanf("%d" , &j2);
	
	if (j1>10)
   		printf ("\n\nO Jogador1 numero e maior que 10\n"); //j1//
	if (j1==10)
        {
        	printf ("\n\nJogador1 você acertou!\n");
        	printf ("O numero e igual a 10.\n");
        	
        	}
        		if (j1<10)
   		printf ("\n\nO Jogador1 numero e menor que 10\n");//j1//
   		
        	
        	if (j2>10)
   		printf ("\n\nO Jogador2 numero e maior que 10\n");//j2//
	if (j2==10)
        {
        	printf ("\n\nJogador2 você acertou!\n");
        	printf ("O numero e igual a 10.\n");
        }
	if (j2<10)
   		printf ("\n\nO Jogador2 numero e menor que 10\n"); //j1//
	return(0);
	
}
