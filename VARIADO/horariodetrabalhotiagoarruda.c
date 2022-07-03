#include <stdio.h>
int main()
{
	float d, h, m;
	printf("      H O R Á R I O  D E  T  R A B A L H O (by Tiago Arruda)\n\n");
	printf("(1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB)\n");
	printf("Digite o dia: ");
	scanf("%f", &d);
	printf("Digite a hora: ");
	scanf("%f", &h);
	printf("Digite os minutos: ");
	scanf("%f", &m);

	if (d == 1)
	{
		printf(" ele não esta trabalhando\n");
	}
	else

		if ((d >= 2 && d <= 6) && (h > 7 && h < 12) && (m >= 0 && m <= 59) || h > 14 && h < 18 && m > 0 && m < 59)
	{
		printf(" ele esta trabalahndo\n");
	}
	else

		if (d == 7 && h > 7 && h < 12 && m > 0 && m < 60)
	{
		printf(" ele esta trabalhando\n");
	}
	else

		printf(" ele não esta trabalhando\n");

	return 0;
}
