#include <stdio.h>
int main ()
{
	float media, nota_1, nota_2, nota_3;
	printf("Digite as suas Notas nas 3 provas: \n");
	scanf ("%f",&nota_1);
	scanf ("%f",&nota_2);
	scanf ("%f",&nota_3);
	media = (nota_1 + nota_2 + nota_3)/3;
	printf("\nSua media final e: %.2f",media);
	
}
