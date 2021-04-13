//leir o nome e o sexo de uma pessoa e definir como “Ilmo. Sr.” (M) ou  “Ilmo. Sra.” (F)
//entrada: nome e sexo
//saída: Ilmo. Sr./Sra + nome do usuário

#include<stdio.h> //biblioteca de entrada e saída: printf e scanf
int main(){
//declarações variáveis:
   	char nome[26];
	int sexo;
//receber e processar dados:
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("1. Feminino \n2.Masculino \nDigite o sexo: ");
    scanf("%d", &sexo);
//processamento/ apresentar dados: 	
   	if (sexo == 1)
   	  printf("ILmo. Sra. %s", nome);
   	    else if (sexo == 2)
   	      printf("ILmo. Sr. %s", nome);
   	      
   }	
