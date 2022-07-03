#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, n5, final;
	printf(" digite as cinco notas em sequencia: \n");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
	final = (n1 + n2 + n3 + n4 + n5) / 5;
	printf(" a nota final foi: %f", final);

	return 0;
}
