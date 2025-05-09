#include <stdio.h>
 
int main()  {
  //Programa de movimentos das peças de Xadrez Rainha, Bispo e Torre.

  int Bispo=0;//Nessa linha é declarada a variavel Bispo.
  int Torre=0;//Nessa linha é declarada a variavel Torre.
  int Cavalo;//Nessa linha é declarada a variavel Cavalo.
  int movimentocompleto=1;//Nessa linha é declarada uma variavel para armazenar o movimento do cavalo.
 
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
   
   //Abaixo é feito o código de movimenotos do Cavalo, usando While e For, em uma estrutura aninhada.

   while( movimentocompleto == 1)//Nessa linha se a variavel for igual a 1, ela vai ser verdadeira e executará o que tiver dentro dela.
   {
    printf("Movimentos do Cavalo em execução\n");//Mensagem usada para melhorar a visualização dos movimenots do Cavalo.
    for(Cavalo=1; Cavalo <= 2; Cavalo++)//Nessa linha tem uma inicialização, uma codição e um incremento.
    {
      printf("Cima\n");//Se a função for acima for verdadeira , esse printf será exibido duas vezes.
    }
    printf("Direita\n");//Se a função While for verdadeira, esse printf será exibido uma vez. 
    movimentocompleto++;//Incremento para que a função While possa executar apenas uma vez.
   }
    
    return 0;//Finalizou com sucesso.
}  