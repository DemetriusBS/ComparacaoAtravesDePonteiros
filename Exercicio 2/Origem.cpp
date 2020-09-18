#include<stdio.h>
#include<stdlib.h>

int main() {

	int RuAluno, RuAleatorio, *p_Ru_Aluno, *p_Ru_Aleatorio; //Declarando variáveis e ponteiros
                                                                     
	printf("Por favor, digite o RU do aluno: ");
	scanf_s("%d", &RuAluno); //Coleta e armazenamento dos dados (Ru do aluno)
	printf("\n Agora digite um RU qualquer: ");
	scanf_s("%d", &RuAleatorio); //Coleta e armazenamento dos dados (Ru aleatório)

	p_Ru_Aluno = &RuAluno; //Atribuindo o endereço da variável RuAluno ao ponteiro
	p_Ru_Aleatorio = &RuAleatorio; //Atribuição de endereço 

	printf("\n\n"); //Quebra de linha

	printf("O RU do aluno e: %d \n", *p_Ru_Aluno); // Impressão do RU do aluno através de um ponteiro
	printf("O RU aleatorio digitado foi: %d \n", *p_Ru_Aleatorio); // IMpressão do RU aleatório através de um ponteiro
																     

	printf("\n\n"); //Quebra de linha

	if (*p_Ru_Aluno > * p_Ru_Aleatorio) //Comparação de RU utilizando os ponteiros
	{
		printf("O maior RU e: %d \n", *p_Ru_Aluno); //Impressão do maior RU
	}
	else if(*p_Ru_Aleatorio > *p_Ru_Aluno)
	{
		printf("O maior RU e: %d \n", *p_Ru_Aleatorio); //Impressão do maior RU
	}
	else
	{
		printf("Os RU's sao iguais!\n"); //Caso os Ru's sejam iguais
	}
    
	system("pause");
	return 0;
}