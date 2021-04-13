//Verificar se os três valores dados pelo usuário podem formar um triangulo
//(triangulo = cada lado é menor do que a soma dos outros dois lados)
//entrada: três valores
//saída: apresentar se os três números formam um triangulo

#include<stdio.h>//biblioteca para entrada e saída: printf e scanf
int main (){
//declaração variáveis:  	
   	int numeroUm, numeroDois, numeroTres;
//receber e processar dados:
   	 printf("Digite o valor 1: ");
   	 scanf("%d", &numeroUm);
   	 
   	 printf("Digite o valor 2: ");
   	 scanf("%d", &numeroDois);
   	 
   	 printf("Digite o valor 3: ");
   	 scanf("%d", &numeroTres);
//Processamento: verificar se cada valor dado é menor que a soma dos outros dois valores
   	 if (numeroUm < numeroDois + numeroTres && numeroDois < numeroUm + numeroTres && numeroTres < numeroUm + numeroDois)
   	    printf("Esses valores formam um tringulo!");
   	  
   }
