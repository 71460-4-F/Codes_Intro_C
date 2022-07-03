#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // inclui apenas para usar o sleep

int main(void)
{
    FILE *fp;
    char *file_name;

    file_name = "testeremove";

    printf("Criando arquivo\n");

    fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        printf("erro ao criar o arquivo para escrita\n");
    }
    else
    {
        printf("Colocando um conteudo no arquivo\n");

        fprintf(fp, "Colocando um conteudo qualquer");
        fclose(fp);

        sleep(10); // aguarda 10 segundos antes de apagar o arquivo, coloquei para você poder checar o arquivo criado
        int ret;
        ret = remove(file_name);
        printf("%d\n", ret);
    }

    return EXIT_SUCCESS;
}
