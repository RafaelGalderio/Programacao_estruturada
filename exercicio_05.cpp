#include <stdio.h>
#include <math.h >
int main ()
{
	
/*
Faça um programa que leia o nome e a data de nascimento de uma pessoa (dia, mês e ano), e
após informe, junto ao nome da pessoa, quantos dias esta pessoa já viveu. Para simplificar o
cálculo considere somente o ano de nascimento e todos os anos com 365 dias.
*/
int dia_n, mes_n, ano_n,dia_atual,mes_atual, ano_atual, dias_vida;
printf ("Informe a sua data de nascimento, dia, mes e ano: \n");
scanf ("%d",&dia_n);
scanf ("%d",&mes_n);
scanf ("%d",&ano_n);
printf ("Informe a sua data atual, dia, mes e ano: \n");
scanf ("%d",&dia_atual);
scanf ("%d",&mes_atual);
scanf ("%d",&ano_atual);
dias_vida = (ano_atual*365  +mes_atual*12+dia_atual)-(ano_n*365+mes_n*12+dia_n);
printf ("Voce viveu: %i",dias_vida);

	
}
