#include <stdio.h>


int media (num);
int main ()
{
int num, cont=-1, media, soma=0;
printf ("Informe numeros reais positivos:");
     while (num>0)
  {
    if (num>0)
    {
    scanf ("%d",&num);
    soma=soma+num;
    cont++;
    }

  }
media=soma/(cont);
printf ("\nA media eh %d",media);
printf ("\nA quantidade de numeros digitados eh %d",cont);
}

/*
2 � Fa�a uma fun��o que leia um n�mero n�o determinado de valores reais
positivos e retorna a m�dia aritm�tica dos mesmos. Ao final, o programa
principal dever� imprimir a quantidade de n�meros lidos e a m�dia. Utilize
passagem de par�metro por refer�ncia para o que for necess�rio.
*/
