#include <stdio.h>
#include <string.h>

int main(void){
	// declaração de variaveis
	char entrada[201];
	char saida[201];
	char espaco = ' ';
	
	// entrada da string
	gets(entrada);
	memset(saida, 0, sizeof(saida));
	
	// buscar a primeira palavra
	char *ponteiroEspaco = strchr(entrada, espaco);
	int posicao = ponteiroEspaco - entrada;
	
	// copiar a primera palavra para a saida
	strncpy(saida, entrada, posicao+1);
	
	// buscar a segunda palavra
	posicao++;
	while(entrada[posicao] == espaco){
		posicao++;
	}
	strcat(saida, entrada + posicao);
	//strcat(saida, &entrada[posicao]);
		
	// imprime a saida
	printf("%s", saida);
	return 0;
}
