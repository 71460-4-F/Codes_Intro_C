

#include <stdio.h>
#include <stdlib.h>

char *concatenar(char string1[], char string2[]);

int main()
{
    char string1[300], string2[300];

    scanf(" %[^\n]", string1);
    scanf(" %[^\n]", string2);

    char *string = concatenar(string1, string2);

    printf("%s", string);
}
