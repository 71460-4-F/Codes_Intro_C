#include <stdio.h>
int main(void)
{
	int hd, md, sd, ha, ma, sa, sonoh, sonom, sonos, horas, min, seg;

	printf("Digite as horas, minutos e segundos que vai dormir\n\n");
	scanf("%d %d %d", &hd, &md, &sd);
	printf("Digite os as horas, minutos e segundos que vai acordar\n\n");
	scanf("%d %d %d", &ha, &ma, &sa);

	printf("Hora que você foi dormir %d:%d:%d\n\n", hd, md, sd);
	printf("Hora que você vai acordou %d:%d:%d\n\n", ha, ma, sa);

	sonoh = (ha - hd);
	sonom = (ma - md);
	sonos = (sa - sd);
	horas = (24 - hd) + ha;
	min = (60 - md) + ma;
	seg = (60 - sd) + sa;

	if (ha > hd)
	{
		if (ha > hd && ma < md)
		{
			printf("Horas de sono %d:%d:%d\n\n", sonoh - 1, sonom + 60, sonos);
		}
		else
		{
			printf("Horas de sono %d:%d:%d\n\n", sonoh, sonom, sonos);
		}
	}
	if ((ha < hd && ma < md) || (sa < sd))
	{
		printf("Horas de sono %d:%d:%d\n\n", horas - 1, min - 1, seg);
	}
	else if (ha < hd)
	{
		printf("Horas de sono %d:%d:%d\n\n", sonoh + 24, sonom, sonos);
	}

	return 0;
}
