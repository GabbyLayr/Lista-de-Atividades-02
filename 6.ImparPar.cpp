//dizer ao usu�rio se seu n�mero � Impar ou Par
//entrada: numero inteiro
//sa�da: n�mero mpar ou Par

#include<stdio.h> //biblioteca de entrada e sa�da = printf e scanf
  int main(){
//declara��o veri�veis:
	int numero;
//receber e processar dados:
	printf("Digite seu numero: ");
	scanf("%d", &numero);
//processamento/ apresentar ao usu�rio seu resultado: (Impar ou Par)	
  	if (numero%2 == 0)
  	  printf("Seu numero e par!");
  	    else if (numero%2 != 0)
  	      printf("Seu numero e impar!");
  	
  }
