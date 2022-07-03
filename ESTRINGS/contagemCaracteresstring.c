#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int conta (char frase [], char palavra [])
{
   int i,count=0;
   for(i=0; i<strlen(frase) ; i++) /*percorre toda a string frase*/
            {
                            while( frase[i] == palavra [i] && i < strlen(palavra))
                            {
                                   count++;
                            }
            }
   return count;  
}
