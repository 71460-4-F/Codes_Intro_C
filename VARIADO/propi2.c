#include <stdio.h>
#include <stdlib.h>
struct tipo_cadastro
{ // Estrutura que sera usada para realizar cadastro
       int cod;
       char cantor[60];
       char nomecd[60];
       int qtcd;
       int anofab;
       float precovenda;
       float precocusto;
       char produtora[60];
       int vazio;
} registros[100];
// Funçoes que serao usadas
void cadastrar(int cod, int pos);
void consultar();          // Funçao para consulta
int relatorio();           // Funçao para exibir relatorio
int verifica_pos();        // Função para verificar posição
int verifica_cod(int cod); // Função para verificar codigo
int verifica_pos();        // Função para verificar posição do codigo
void excluir();            // Função para excluir cadastro

int main()
{ // Começo do programa principal
       int op = 0, posicao, codaux, retorno;
       while (op != 5)
       {
              printf("\n\n\t\t\t\t** SYSPROPY**\n\n\n");
              printf("MENU\n\n1 - Cadastrar Politico\n2 - Pesquisar Politico\n3 - Excluir Politico\n4 - Relatorio\n5 - Sair\n\nOpcao: ");
              scanf("%d", &op);
              system("cls");
              switch (op)
              {
              case 1:
              { // CADASTRAR
                     posicao = verifica_pos();
                     if (posicao != -1)
                     {
                            printf("\nEntre com o codigo de cadastro do CD (Somente numeros): \n");
                            scanf("%d", &codaux);
                            fflush(stdin);
                            retorno = verifica_cod(codaux);
                            if (retorno == 1)
                                   cadastrar(codaux, posicao);
                            else
                                   printf("\nCodigo ja existente\n");
                     }
                     else
                            printf("\nNao e possivel realizar mais cadastros!\n");
                     break;
              }
              case 2:
              { // CONSULTAR
                     consultar();
                     break;
              }
              case 3:
              {
                     excluir();
                     break;
              }
              case 4:
              {
                     system("cls");
                     printf("Opcao indisponivel");
                     break;

              case 5:
              {
                     printf("\n Programa de cadastro Loja de CD by Grupo 6 - Tchau");
                     getchar();
                     break;
              }
              default:
                     printf("Opcao Invalida");
                     break;
              }
              }
       }
       getchar();
} // Final da Main

void cadastrar(int cod, int pos)
{ // FUNÇAO CADASTRAR
       pos = verifica_pos();
       registros[pos].cod = cod;
       printf("\nProdutora:\n");
       gets(registros[pos].produtora);
       printf("\nNome do CD:\n");
       gets(registros[pos].nomecd);
       printf("\nNome do cantor[a] ou banda:\n");
       gets(registros[pos].cantor);
       printf("\nAno de Fabricacao:\n");
       while (registros[pos].anofab < 1910 || registros[pos].anofab > 2020)
       {
              scanf("%d", &registros[pos].anofab);
              if (registros[pos].anofab < 1910 || registros[pos].anofab > 2020)
                     printf("Ano invalido, digite ano entre 1910 e 2020:");
       }
       printf("\nPreco de custo:\n");
       while (registros[pos].precocusto <= 0)
       {
              scanf("%f", &registros[pos].precocusto);
              if (registros[pos].precocusto <= 0)
                     printf("Valor invalido, digite um valor acima de 0:");
       }
       registros[pos].precovenda = registros[pos].precocusto + (registros[pos].precocusto / 2);
       printf("\nInforme quantidade de CD's comprados:");
       scanf("%d", &registros[pos].qtcd);
       registros[pos].vazio = 1;
       printf("\nCadastro Realizado com Sucesso!\n\n");
       getchar();
       getchar();
       system("cls");
} // Final da Função Cadastrar

void consultar()
{ // FUNÇÃO CONSULTAR
       int cont = 0, cod;
       printf("\nEntre com o codigo\n");
       scanf("%d", &cod);
       system("cls");
       while (cont <= 100)
       {
              if (registros[cont].cod == cod)
              {
                     if (registros[cont].vazio == 1)
                     {
                            printf("\nProdutora: \n%s\n", registros[cont].produtora);
                            printf("\nNome do cantor[a] ou banda: \n%s\n", registros[cont].cantor);
                            printf("\nNome do CD: \n%s\n", registros[cont].nomecd);
                            printf("\nAno de fabricacao: \n%d\n", registros[cont].anofab);
                            printf("\nPreco de venda: \nR$%.2f\n", registros[cont].precovenda);
                            printf("\nQuantidade de CD's em estoque:\n%d\n", registros[cont].qtcd);
                            getchar();
                            printf("\n");
                            system("pause");
                            system("cls");
                            break;
                     }
              }
              cont++;
              if (cont > 100)
                     printf("\nCodigo nao encontrado\n");
       }
}
// FUNÇÃO VERIFICA POSIÇÃO
int verifica_pos()
{
       int cont = 0;
       while (cont <= 100)
       {
              if (registros[cont].vazio == 0)
                     return (cont);
              cont++;
       }
       return (-1);
}
// FUNÇÃO ZERAR
void zerar()
{
       int cont;
       for (cont = 0; cont <= 100; cont++)
              registros[cont].vazio = 0;
}
// FUNÇÃO VERIFICA CODIGO
int verifica_cod(int cod)
{
       int cont = 0;
       while (cont <= 100)
       {
              if (registros[cont].cod == cod)
                     return (0);
              cont++;
       }
       return (1);
}
// FUNÇÃO EXCLUIR
void excluir()
{
       int cod, cont = 0;
       char resp;
       printf("\nEntre com o codigo do registro que deseja excluir\n");
       scanf("%d", &cod);
       while (cont <= 100)
       {
              if (registros[cont].cod == cod)
                     if (registros[cont].vazio == 1)
                     {
                            printf("\nProdutora: \n%s\n", registros[cont].produtora);
                            printf("\nNome do cantor[a] ou banda: \n%s\n", registros[cont].cantor);
                            printf("\nNome do CD: \n%s\n", registros[cont].nomecd);
                            printf("\nAno de fabricacao: \n%d\n", registros[cont].anofab);
                            printf("\nPreco de venda: \nR$%.2f\n", registros[cont].precovenda);
                            printf("\nQuantidade de CD's em estoque:\n%d\n", registros[cont].qtcd);
                            getchar();
                            printf("\nDeseja realmente exlucir? S/N:");
                            scanf("%c", &resp);
                            if (resp == 'S' || resp == 's')
                            {
                                   registros[cont].vazio = 0;
                                   printf("\nExclusao feita com sucesso\n");
                                   break;
                            }
                            else if (resp == 'N' || resp == 'n')
                            {
                                   printf("Exclusao cancelada!\n");
                                   break;
                            }
                     }
              cont++;
              if (cont > 100)
                     printf("\nCodigo nao encontrado\n");
       }
       getchar();
       system("pause");
       system("cls");
}
