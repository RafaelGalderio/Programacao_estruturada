#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>
main()
{setlocale(LC_ALL,"Portuguese");//Habilita a acentuação em português
int i,j;
int precos[3][4];
char nomes_lojas[3][20], nomes_produtos[4][20];

for(i=0 ; i<3; i++)
    {
        printf("Informe os nome das lojas:");
        gets(nomes_lojas[i]);
    }
printf("\n");
for(i=0 ; i<4; i++)
    {
        printf("Informe os nome dos produtos:");
        gets(nomes_produtos[i]);
    }
printf("\n");
printf ("INFORME OS VALORES DA MATRIZ PREÇOS, SÃO 3 LOJAS E CADA LOJA COM 4 PRODUTOS.\n");
for(i=0; i<3; i++)
    {
       for(j=0 ; j<4; j++)
            {
                printf("Informe o valor do produto %s das loja %s:",nomes_produtos[i],nomes_lojas[i]);
                scanf("%d",&precos[i][j]);
            }
    }
printf("\n");
printf("Segue o vetor lojas:\n");
for(i=0 ; i<3; i++)
    {
      printf("%s\n",nomes_lojas[i]);
    }
printf("\nSegue o vetor dos produtos:\n");
for(i=0 ; i<4; i++)
    {
      printf("%s\n",nomes_produtos[i]);
    }
printf("\nSegue a Matriz preços:\n");
for (i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
            {
            printf("%3d",precos[i][j]);
            }
            printf("\n");
        }
;
return 0;
}

/*
12. Faça um programa que preencha:
a. Um vetor de 8 posições, contendo nomes de
lojas;
b. Outro vetor com quatro posições contendo
nomes de produtos;
c. Uma matriz com os preços de todos os
produtos em cada loja.
O programa deverá mostrar todas as relações (nome
do produto – nome da loja) em que o preço não
ultrapasse R$ 120,00.
*/
