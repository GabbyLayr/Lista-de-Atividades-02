//Verificar se os tr�s valores dados pelo usu�rio podem formar um triangulo
//(triangulo = cada lado � menor do que a soma dos outros dois lados)
//entrada: tr�s valores
//sa�da: apresentar se os tr�s n�meros formam um triangulo

#include<stdio.h>//biblioteca para entrada e sa�da: printf e scanf
int main (){
//declara��o vari�veis:  	
   	int numeroUm, numeroDois, numeroTres;
//receber e processar dados:
   	 printf("Digite o valor 1: ");
   	 scanf("%d", &numeroUm);
   	 
   	 printf("Digite o valor 2: ");
   	 scanf("%d", &numeroDois);
   	 
   	 printf("Digite o valor 3: ");
   	 scanf("%d", &numeroTres);
//Processamento: verificar se cada valor dado � menor que a soma dos outros dois valores
   	 if (numeroUm < numeroDois + numeroTres && numeroDois < numeroUm + numeroTres && numeroTres < numeroUm + numeroDois)
   	    printf("Esses valores formam um tringulo!");
   	  
   }
