//Leitura de velocidade do carro e dizer se foi multado ou n�o
//Entrada: Leitura de velocidade e placa do carro
//Sa�da: Mensagem de multa

#include<stdio.h> //biblioteca de entrada e sa�da; printf e scanf
int main (){
//declara��o vari�veis:
    int placa; //leitura da placa do carro, somente n�meros
	int velocidade; //leitura da velocidade do carro
//receber e processar dados;
//dados da placa do carro:
	 printf("Digite a placa do carro: "); //receber dado da placa do carro
	 scanf("%d", &placa); //processar dado da placa do carro
//dados da velocidade do carro:
	 printf("Digite a velocidade do carro: "); //receber dado da velocidade do carro
	 scanf("%d", &velocidade); //processar dado da velocidade do carro
//procesamento
//apresentar ao usu�rio o resultado / mensagem de mumlta ou n�o multa
	if (velocidade >= 80)
	  printf("Voce foi multado por excesso de velocidade!", placa, velocidade);
	    else if (velocidade < 80) 	
	      printf("Sem multas!");
}
