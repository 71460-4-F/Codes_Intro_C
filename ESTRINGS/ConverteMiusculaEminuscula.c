#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char frase[40];
    
    printf("Este programa converte frase para maiuscula e minuscula\n");
    printf("Digite uma frase: ");
    gets(frase);
    strupr(frase);        //Converte o conteúdo da variável frase para maiúsculo
    system("cls");
    printf("\nMAIUSCULA: %s\n\n",frase);
    strlwr(frase);       //Convertte o conteúdo da variável frase para minúsculo
    printf("minuscula: %s\n\n\n",frase);
   
system("pause");
}
