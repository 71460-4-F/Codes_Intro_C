#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char texto[50];
	char palavra[20];
	char substituicao[20];
	
	gets(texto);
	gets(palavra);
	gets(substituicao);
	
	//marcar textos livres e verificar ocorrencia do padra da palavra
	
	int cursor = 0;
	while (cursor < strlen(texto)){
		int cursorPalavra = 0;
		if(texto[cursor+cursorPalavra] == palavra[cursorPalavra]){
	printf("achei na posicao %d", cursor+cursorPalavra);
	
}
cursor++;
}
	
	
	return 0;
}
