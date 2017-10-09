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
2 – Faça uma função que leia um número não determinado de valores reais
positivos e retorna a média aritmética dos mesmos. Ao final, o programa
principal deverá imprimir a quantidade de números lidos e a média. Utilize
passagem de parâmetro por referência para o que for necessário.
*/
