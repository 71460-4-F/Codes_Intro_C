#include <stdio.h>
#include <string.h>

int main()
{
	char texto[100];
	int i = 0;

	scanf("%[^\n]", texto);

	do
	{
		if (texto[i] > 64 && texto[i] < 91)
		{
			texto[i] += 32;
		}
		else if (texto[i] > 96 && texto[i] < 123)
		{
			texto[i] -= 32;
		}
		i++;
	} while (texto[i] != '\0');

	printf("%s", texto);

	return (0);
}
