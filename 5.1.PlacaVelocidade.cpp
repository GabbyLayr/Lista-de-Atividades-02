//Leitura de velocidade do carro e dizer se foi multado ou não
//Entrada: Leitura de velocidade e placa do carro
//Saída: Mensagem de multa

#include<stdio.h> //biblioteca de entrada e saída; printf e scanf
int main (){
//declaração variáveis:
    int placa; //leitura da placa do carro, somente números
	int velocidade; //leitura da velocidade do carro
//receber e processar dados;
//dados da placa do carro:
	 printf("Digite a placa do carro: "); //receber dado da placa do carro
	 scanf("%d", &placa); //processar dado da placa do carro
//dados da velocidade do carro:
	 printf("Digite a velocidade do carro: "); //receber dado da velocidade do carro
	 scanf("%d", &velocidade); //processar dado da velocidade do carro
//procesamento
//apresentar ao usuário o resultado / mensagem de mumlta ou não multa
	if (velocidade >= 80)
	  printf("Voce foi multado por excesso de velocidade!", placa, velocidade);
	    else if (velocidade < 80) 	
	      printf("Sem multas!");
}
