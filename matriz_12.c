#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale
#include <string.h>
main()
{setlocale(LC_ALL,"Portuguese");//Habilita a acentua��o em portugu�s
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
printf ("INFORME OS VALORES DA MATRIZ PRE�OS, S�O 3 LOJAS E CADA LOJA COM 4 PRODUTOS.\n");
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
printf("\nSegue a Matriz pre�os:\n");
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
12. Fa�a um programa que preencha:
a. Um vetor de 8 posi��es, contendo nomes de
lojas;
b. Outro vetor com quatro posi��es contendo
nomes de produtos;
c. Uma matriz com os pre�os de todos os
produtos em cada loja.
O programa dever� mostrar todas as rela��es (nome
do produto � nome da loja) em que o pre�o n�o
ultrapasse R$ 120,00.
*/
