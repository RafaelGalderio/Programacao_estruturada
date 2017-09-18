#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>
float menor_num (float num_1, float num_2, float num_3);
float maior_num (float num_1, float num_2, float num_3);
main()
{setlocale(LC_ALL,"Portuguese");
float num_1, num_2, num_3;
printf("Informe as suas 3 notas:\n");
    {
        scanf("%f",&num_1);
        scanf("%f",&num_2);
        scanf("%f",&num_3);
    }
printf("Segue o maior numero informado: %.2f \n",maior_num(num_1,num_2,num_3));
printf("Segue o menor numero informado: %.2f \n",menor_num(num_1,num_2,num_3));
return 0;
}
float menor_num (float num_1, float num_2, float num_3)
    {float menor=9999.9;
    if (num_1<num_2 && num_1<num_3)
        {

            menor=num_1;
        }
         else if (num_2<num_1 && num_2<num_3)
         {
             menor=num_2;

         }
         else
         {
            menor=num_3;
         }
    return menor;
    }


float maior_num (float num_1, float num_2, float num_3)
    {float maior=0.00;
    if (num_1>num_2 && num_1>num_3)
        {

            maior=num_1;
        }
         else if (num_2>num_1 && num_2>num_3)
         {
             maior=num_2;

         }
         else
         {
            maior=num_3;
         }
    return maior;
    }

/*
2 – Fazer um programa que recebe 3 valores do usuário e depois encontra
o maior e o menor número (duas funções).
*/
