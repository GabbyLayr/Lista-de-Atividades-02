//Dizer deferen�a do maior valor para o menor
//entrada: numero 1 e numero 2
//sa�da: apresentar a diferen�a entre o maior nalor para o menos

#include<stdio.h> //biblioteca para entrada e sa�da: pritf e scanf
int main (){
//declara��o vari�veis:
	int um, dois, resultado;
//receber e processar os dados:
	printf("Digite o primeiro numero: ");
	scanf("%d", &um);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &dois);
//processamento:
	resultado = um - dois;
//apresentar resultado ao usu�rio
	printf("A Diferenca do maior valor para o menor valor e de: %d numeros\n", resultado);
	  if (um > dois)
      printf("Sendo %1.d o maior numero!", um);
        else if (dois > um)		
          printf("Sendo %1.d o maior numero!", dois);
	
}
