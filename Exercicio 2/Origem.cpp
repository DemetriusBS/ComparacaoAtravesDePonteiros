#include<stdio.h>
#include<stdlib.h>

int main() {

	int RuAluno, RuAleatorio, *p_Ru_Aluno, *p_Ru_Aleatorio; //Declarando vari�veis e ponteiros
                                                                     
	printf("Por favor, digite o RU do aluno: ");
	scanf_s("%d", &RuAluno); //Coleta e armazenamento dos dados (Ru do aluno)
	printf("\n Agora digite um RU qualquer: ");
	scanf_s("%d", &RuAleatorio); //Coleta e armazenamento dos dados (Ru aleat�rio)

	p_Ru_Aluno = &RuAluno; //Atribuindo o endere�o da vari�vel RuAluno ao ponteiro
	p_Ru_Aleatorio = &RuAleatorio; //Atribui��o de endere�o 

	printf("\n\n"); //Quebra de linha

	printf("O RU do aluno e: %d \n", *p_Ru_Aluno); // Impress�o do RU do aluno atrav�s de um ponteiro
	printf("O RU aleatorio digitado foi: %d \n", *p_Ru_Aleatorio); // IMpress�o do RU aleat�rio atrav�s de um ponteiro
																     

	printf("\n\n"); //Quebra de linha

	if (*p_Ru_Aluno > * p_Ru_Aleatorio) //Compara��o de RU utilizando os ponteiros
	{
		printf("O maior RU e: %d \n", *p_Ru_Aluno); //Impress�o do maior RU
	}
	else if(*p_Ru_Aleatorio > *p_Ru_Aluno)
	{
		printf("O maior RU e: %d \n", *p_Ru_Aleatorio); //Impress�o do maior RU
	}
	else
	{
		printf("Os RU's sao iguais!\n"); //Caso os Ru's sejam iguais
	}
    
	system("pause");
	return 0;
}