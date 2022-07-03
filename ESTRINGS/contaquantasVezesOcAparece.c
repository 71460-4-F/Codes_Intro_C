#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tam 100

int main(){
char string[tam];
char caracter[1];
int i,cont=0;

printf(" Digite uma frase : ");
gets(string);

printf(" Digite o caractere a ser contado : ");
gets(caracter);

for(i=0;i<tam;i++)
{
if(string[i]== caracter[0])
{
cont+=1;
}
}
printf("Contador : %d",cont);
getch();
}
