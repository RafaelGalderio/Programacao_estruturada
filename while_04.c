#include <stdio.h>
#include <stdlib.h>
int main ()
{
float media=0.0,valor,cont_valor=-1.0, per_posi, per_nega,positivos=0.0, negativos=0.0;
int soma_valor=0 ;
do
{
    printf ("Informe um numero qualquer positivo ou negativo: ");
    scanf  ("%f",&valor);
    soma_valor= soma_valor+valor;
    cont_valor++;
    if (valor>0)
    {
        positivos++;
    }
    if (valor<0)
    {
        negativos++;
    }
per_posi= positivos/(positivos+negativos);
per_nega= negativos/(positivos+negativos);
}
while ((valor!=0));
    media= (soma_valor)/cont_valor;
    per_posi= (positivos/(positivos+negativos))*100;
    per_nega= (negativos/(positivos+negativos))*100;
    printf ("\tA soma dos valores digitados e: %d\n",soma_valor);
    printf ("\tForam digitados %.0f valores.\n",cont_valor);
    printf ("\tA media dos valores e: %.1f\n",media);
    printf ("\tForam informados %.0f valor(es) positivo(s).\n",positivos);
    printf ("\tForam informados %.0f valor(es) negativo(s).\n",negativos);
    printf("\t\O percentual de valores positivos e: %.2f%%\n",per_posi);
    printf("\tO percental de valores negativos e: %.2f%%\n",per_nega);

    return 0;
}

/*
4) Faça um programa que leia um número não determinado de valores, calcule e mostre: a média
aritmética dos valores lidos; a quantidade de valores positivos; a quantidade de valores negativos
e o percentual de valores negativos e positivos. Use o zero (0) para sair.
*/

