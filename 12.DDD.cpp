// leia o n�mero de DDD e informe a qual cidade pertence
//61 - Bras�lia
//71 - Salvador
//11 - S�o Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vit�ria
//31 - Belo Horizonte
//entrada: DDD
//sa�da: mensagem dizendo de qual cidade esse DDD pertence

#include<stdio.h> //biblioteca de entrada e sa�da: printf e scanf

int main () {
//declara��o veri�veis:
	int DDD;
//receber e processar dados:
	printf("Digite o DDD: "); //receber  dado DDD
	scanf("%d", &DDD); //processar dado DDD
//processamento / mensagem indicando qual cidade pertece o DDD digitado
	if (DDD == 61)
	  printf("Bras�lia");
	    else if (DDD == 71)
	      printf("Salvador");
	        else if (DDD == 11)
	          printf("S�o Paulo");
	            else if (DDD == 21)
	              printf("Rio de Janeiro");
	                else if (DDD == 32)
	                  printf("Juiz de Fora");
	                    else if (DDD == 19)
	                      printf("Campinas");
	                        else if (DDD == 27)
	                          printf("Vit�ria");
	                            else if (DDD == 31)
	                              printf("Belo Horizonte");	
	
}
