#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale
#include <string.h>


int main()
{setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
int mat[6][6];
int lin, col;
printf("Segue a matriz 6x6:\n");
for(lin=0; lin<6; lin++)
    {
    for(col=0; col<6; col++)
        {

         mat[lin][col] = 3*lin+2*col;
         printf("%3d ", mat[lin][col]);
        }
    printf("\n");
    }
system ("PAUSE");
printf("\nSegue os valores da Diagonal principal\n");
for(lin=0; lin<6; lin++)
    {
    for(col=0; col<6; col++)
        {
        if (lin==col)
            {
                printf("%3d ", mat[lin][col]);
            }
        }
    }
printf("\n");
printf("\nSegue os valores do triangulo superior � diagonal principal:");
printf("\n");
for(lin=0; lin<6; lin++)
    {
    for(col=0; col<6; col++)
        {
        if (lin<col)
            {
                printf("%3d ", mat[lin][col]);
            }
        }
    printf("\n");
    }
    printf("\nSegue os valores do triangulo inferior � diagonal principal:");
    for(lin=0; lin<6; lin++)
    {
    for(col=0; col<6; col++)
        {
        if (lin>col)
            {
                printf("%3d ", mat[lin][col]);
            }
        }
    printf("\n");
    }
printf("\nSegue os valores da diagonal secund�ria");
printf("\n");
for (lin=0 ; lin<6 ; lin++)
    {
        for (col=0; col<6 ; col++)
        {
            if (col+lin==5)
            {
                printf("%3d",mat[lin][col]);
            }
        }
    }
    printf("\n");
return 0;
}

/*
10. Fa�a um programa que preencha uma matriz 6x6,
calcule e informe:
a. A diagonal principal;
b. O tri�ngulo superior � diagonal principal;
c. O tri�ngulo inferior � diagonal principal;
d. Tudo, exceto a diagonal principal;
e. A diagonal secund�ria.
*/
