//dizer ao usuário se seu número é Impar ou Par
//entrada: numero inteiro
//saída: número mpar ou Par

#include<stdio.h> //biblioteca de entrada e saída = printf e scanf
  int main(){
//declaração veriáveis:
	int numero;
//receber e processar dados:
	printf("Digite seu numero: ");
	scanf("%d", &numero);
//processamento/ apresentar ao usuário seu resultado: (Impar ou Par)	
  	if (numero%2 == 0)
  	  printf("Seu numero e par!");
  	    else if (numero%2 != 0)
  	      printf("Seu numero e impar!");
  	
  }
