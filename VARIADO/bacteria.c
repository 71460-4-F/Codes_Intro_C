#include <stdio.h> // Quixadá-CE  19/09/2016
				   //     by Tiago A. F.

int main()
{
	int seg = 0, bact = 1;
	int i = 0;

	scanf("%d", &seg);
	for (i = 0; i < seg; i++)
	{
		bact = bact * 2;
	}
	printf("%d", bact);

	return 0;
}
