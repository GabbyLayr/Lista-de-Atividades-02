//encontrar, entre três números, qual possui o MENOR valor e apresentar ao usuário
//entrada: três números
//saída: MENOR número entre os treês

#include<stdio.h> //biblioteca de entrada e saída: printf e scanf
int main(){
//declarar variáveis:
    double N1, N2, N3, N4;
//receber e processar dados:
	printf("Digite o primeiro numero: ");
	scanf("%lf", &N1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &N2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &N3);
//processamento:
    if (N1 < N2 && N1 < N3)
      printf("%1.lf e o menor numero!", N1);
        else if (N2 < N1 && N2 < N3)
          printf("%1.lf e o menor numero!", N2);
            else if (N3 < N2 && N3 < N1)
              printf("%1.lf e o menor numero!", N3);
			  		
}
