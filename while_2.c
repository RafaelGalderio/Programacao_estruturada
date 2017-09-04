#include <stdio.h>
 int main()
     {int n, contador=-1, somatorio=+1, impar=-1, par=0;
             printf ("Informe um valor positivo qualquer: ");
             while (n!=-1)
             {
                 scanf ("%d", &n);
                 contador++;
                 somatorio=somatorio+n;
                 if (n%2==0)
                 {
                     par++;
                 }

                 else
                 {
                     impar++;
                 }


             }
             printf ("A quantidade de numeros digitados foi: %d\n",contador);
             printf ("O somatorio dos numeros digitados foi: %d\n",somatorio);
             printf ("A quantidade de pares eh: %d\n",par);
             printf ("A quantidade de impares eh: %d\n",impar);

            return 0;
     }

/*Faça um programa no qual o usuário insira valores numéricos positivos até digitar -1 e ao final
informe:
 quantos números foram digitados;
 o somatório dos valores digitados;
 quantos números pares e quantos números impares foram digitados.
*/

