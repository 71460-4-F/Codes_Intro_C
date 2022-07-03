#include <stdio.h>

int funcao(int var, int *ponteiro)
{

	*ponteiro = var + 10;
	printf("%p\n", &var);
	return var;
}

int main()
{

	int var;
	int *Endereco = &var;
	scanf("%d", &var);
	printf("%d\n", var);
	printf("%p\n", &var);
	funcao(var, Endereco);
	printf("%d\n", var);
}
