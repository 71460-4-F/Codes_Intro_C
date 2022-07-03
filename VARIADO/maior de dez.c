/*entrar com 10 numeros e dizer qual é o MAIOR*/
#include <iostream>
using namespace std;
int main()
{
    int n,x,y;
    y=0;
    cout<< "...:::Diz qual dos 10 numeros e maior:::... ";
    
    for(x=1;x<=10;x++)//pode trocar por quantos numeros quiser.
     {//se quiser a entrada com mais é só alterar o 10
      cout<<"\nDigite: ";
      cin>> n;
      if(y<n)  //y é 0, se o usuario digita 10 o y é menor que 10 é 0
      {        //entao o y vira 10,pois y=n e n é 10
       y=n ; // se digitar 2 depois... n fica valendo 2 
      }      //mas y é maior do que 2 pois ele assumiu o valor 10
             // entao ele nao entra na condição e fica com o maior valor,
             // pois o enunciado diz que quer o maior.
     }    
 cout<<y<<endl;
   cin.get();cin.get();                  
    
}
