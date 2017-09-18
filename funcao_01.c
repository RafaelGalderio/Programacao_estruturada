#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>
float soma (float nota_1, float nota_2, float nota_3);
float media (float nota_1, float nota_2, float nota_3);
main()
{setlocale(LC_ALL,"Portuguese");//Habilita a acentuação em português
float nota_1, nota_2, nota_3;
printf("Informe as suas 3 notas:\n");
    {
        scanf("%f",&nota_1);
        scanf("%f",&nota_2);
        scanf("%f",&nota_3);
    }
printf ("\nA média foi %.2f.",media(nota_1,nota_2,nota_3));
printf ("\nA soma das notas foi %.2f.",soma(nota_1,nota_2,nota_3));
return 0;
}

float soma (float nota_1, float nota_2, float nota_3)
    {
        float soma;
        soma=nota_1+nota_2+nota_3;
        return soma;
    }
float media (float nota_1, float nota_2, float nota_3)
     {
        float media;
        media=(nota_1+nota_2+nota_3)/3;
        return media;
     }



/*
1 – Fazer um programa que recebe 3 valores do usuário e depois calcula a
soma e a média (duas funções).

*/
