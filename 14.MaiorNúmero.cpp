//encontrar, entre tr�s n�meros, qual possui o MAIOR valor e apresentar ao usu�rio
//entrada: tr�s n�meros
//sa�da: MAIOR n�mero entre os tre�s

#include<stdio.h> //biblioteca de entrada e sa�da: printf e scanf
int main(){
//declarar vari�veis:
    double N1, N2, N3, N4;
//receber e processar dados:
	printf("Digite o primeiro numero: ");
	scanf("%lf", &N1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &N2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &N3);
//processamento:
    if (N1 > N2 && N1 > N3)
      printf("%1.lf e o maior numero!", N1);
        else if (N2 > N1 && N2 > N3)		
          printf("%1.lf e o maior numero!", N2);
            else if (N3 > N2 && N3 > N1)
              printf("%1.lf e o maior numero!", N3);
			  		
}
