#include <stdio.h>

//Abaixo foram digitadas funções para movimentos da Torre, Rainha e Bispo, usando Recursividade;

//Função De Movientos a Torrre;
void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
//Função de Movimentos Da Rainha;
void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
//Função de Movimentos do Bispo
void moverBispo(int casas){
    if(casas > 0){
        printf("Cima + Direita\n");
        moverBispo(casas - 1);
    }
}

int main(){
    //Abaixo foram utilizadas as funções Recursivas criadas acima;

    //Imprime os movimentos da Torre; 
    printf("Movimentos da Torre\n");    //Frase que indica os movimenotos da Torre.
    moverTorre(5);//Função Recursiva
    
    //Imprime os movimentos da Rainha;
    printf("Movimentos da Rainha\n");  //Frase que indica os movimenotos da Rainha.
    moverRainha(8);//Função Recursiva
    
    //Imprime os movimentos do Bispo;
    printf("Movimentos do Bispo\n");   //Frase que indica os movimentos do Bispo.
    moverBispo(5);//Função Recursiva
   
    //Abaixo foram feitos os moviemenotos do Cavalo;
    
    //Foram usadas funções "for", para executar os movimenotos do cavalo;
    //Função com duas condições;
    //Condições com respostas unicas para serem imprimidas.

    printf("Movimenotos do Cavalo\n");//Frase que indica os movimenotos do Cavalo.
   for(int Cavalo = 1; Cavalo <= 2; Cavalo ++){  //Primeira condição;
    printf("Cima\n");//Resposta da Primeira codição;
   }for(int cavalo = 1; cavalo == 1; cavalo--){  //Segunda condição;
    printf("Direita\n");//Resposta da Segunda condição;
   }
   
   return 0;//Programa finalizado com Sucesso.
}