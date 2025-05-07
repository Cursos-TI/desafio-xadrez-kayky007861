#include <stdio.h>
 
int main()  {
  //Programa de movimentos das peças de Xadrez Rainha, Bispo e Torre.

  int Bispo=0;//Nessa linha é declarada a variavel Bispo.
  int Torre=0;//Nessa linha é declarada a variavel Torre.
 
  //Abaixo é feito o código de movimento da Rainha, usando for. 

   printf("Movimentos da Rainha em execução!\n");//Mensagem usada para melhorar a visualização dos movimentos da Rainha.
   for( int Rainha = 0; Rainha <=8; Rainha++)//Nessa linha é visto a Declaração da variavel Rainha, a codição e o incremento de 1 a variavel Rainha.
  {
    printf("ESQUERDA\n");//Movimento da Rainha que será exibido na tela, se a condição for Verdadeira.
  }
 
  //Abaixo é feito o código de movimenoto do Bispo, usando do-while

   printf("Movimentos do Bispo em execução\n");//Mensagem usada para melhorar a visualização dos movimentos do Bispo.
   do//Nessa função o código entre chaves abaixo será executado independente da condição ser verdadeira ou falsa.
   {
    printf("CIMA + DIREITA\n");//Movimento do Bispo que será exibido na tela.
    Bispo++;//Nessa linha é incrementado 1 a variavel Bispo.
   }
   while (Bispo <=5);//condição, se a Variavel Bispo for menor que 5, a função 'do' continua sua execução.

   
  //Abaixo é feito o código de movimentos da Torre, usando While.

  printf("Movimentos da Torre em execeução!\n");//Mensagem usada para melhorar a visualização dos movimenotos da Torre.
   while(Torre <=5)//Codição, se a Variavel Torre for menor que 5, a função while continua sua execução.
   {
    printf("DIREITA\n");//Movimento da Torre que será exibido na tela.
    Torre++;//Nessa linha é incrementado 1 a variavel Torre.
   }
   
    return 0;//Finalizou com sucesso.
}  
