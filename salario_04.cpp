/*
 Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a
receber sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga
imposto de 7% sobre o sal�rio com a gratifica��o.
*/
#include <stdio.h>
int main ()
{
	float salario, bonificacao, imposto, novo_salario;
	printf ("Informe o valor do seu salario base: \n");
	scanf ("%f",&salario);
	printf ("\nO valor da sua bonificacao de 5%% e a aliquota de imposto e 7%%");
	bonificacao = salario * 0.05;
	novo_salario = (salario + bonificacao) - (salario + bonificacao)*0.07;
	imposto = (salario + bonificacao)*0.07;
	printf ("\nO valor do novo salario e: %.2f reais e do imposto e : %.2f reais",novo_salario,imposto);
	
}

