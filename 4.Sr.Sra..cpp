//leir o nome e o sexo de uma pessoa e definir como �Ilmo. Sr.� (M) ou  �Ilmo. Sra.� (F)
//entrada: nome e sexo
//sa�da: Ilmo. Sr./Sra + nome do usu�rio

#include<stdio.h> //biblioteca de entrada e sa�da: printf e scanf
int main(){
//declara��es vari�veis:
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
