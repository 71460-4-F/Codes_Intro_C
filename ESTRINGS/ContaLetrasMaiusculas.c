#include <stdio.h>
#include <stdlib.h>

char alfabeto[26]={'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int contar_maiusculas(char string[])
{
int i,j; //contadores de laços 'for'
int quant=0; //numero de letras maiusculas
for(i=0;i<strlen(string);i++){ //loop para string
for(j=0;j<=26;j++) //loop para vetor do alfabeto
if(string[i]==toupper(alfabeto[j])){ //checa se a letra 'i' da string é maiuscula
++quant; //incrementa a variavel que contem o numero de letras maiusculas
string[i]=tolower(string[i]); //passa a letra maiuscula para minuscula
}
}
printf("Sua frase tem %d caracteres maiusculos.\n", quant);
printf("Frase toda minuscula:\n%s\n", string);
}

int main(){
char frase[50];
printf("Digite uma frase: ");
gets(frase);
contar_maiusculas(frase);
return 0;
}

