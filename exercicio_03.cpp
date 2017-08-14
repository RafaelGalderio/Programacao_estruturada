
/*
Faça um programa que recebe o salário de um funcionário e o percentual de aumento, calcule
e mostre o valor do aumento e o novo salário
*/
#include <stdio.h>
int main ()
{
	float salario, per_aumento, valor_aumento, novo_salario;
	printf ("Informe o seu salario e o percentual de aumento : \n");
	scanf ("%f", &salario);
	printf("\n");
	scanf ("%f",&per_aumento);
	valor_aumento = (salario*per_aumento)/100;
	novo_salario = salario + valor_aumento;
	printf ("\nO valor do aumento e : %.3f reais, e o valor do novo salario e: %.3f reais",valor_aumento,novo_salario);
	  
}
