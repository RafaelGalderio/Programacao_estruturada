#include <stdio.h>
int main ()
{
	float peso_kg, peso_gramas;
	printf ("Informe o seu peso em quilos: \n");
	scanf ("%f",&peso_kg);
	peso_gramas = (peso_kg)*1000;
	printf ("Seu peso convertido em gramas eh: %.2f gramas, e em quilos eh %.2f quilos.",peso_gramas,peso_kg);
	  
	
}
//Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
//em gramas.
