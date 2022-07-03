#include <stdio.h>
int main(void){
	int n=10000; // define o tamanho do vetor
	int vet[n];
	int cp=0;
	int cs=0; // variaveis do for
	int ct
	;
	 
	 printf("digite a quantidade da fila\n");
	 scanf("%d", &n);
	 
	 for(cp=0; cp < n; cp++){
		 scanf("%d", &vet[cp]); // for para adicionar conteudo ao vetor
	 }
	    for(cs=0; cs<n; cs++){  // for para mostra o conteudo armazenado
		 printf("%d", vet[cs]);
		}
	  printf("\n");
	  
	  for(ct=n-1; ct > -1; ct--){ // for para inverter a ordem de leitura
		  printf("%d", vet[ct]);
		 
	  }
	  printf("\n");
	  return 0;
  }
