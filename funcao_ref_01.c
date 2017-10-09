#include <stdio.h>

int quadrado (int *num);
int cubo (int *num);

int main()

{
    int num;
    printf("Digite o numero: ");
    scanf ("%d",&num);
    printf ("\nO valor do quadrado: %d",quadrado(&num));
    printf ("\nO valor do cubo: %d",cubo(&num));
    return 0;
}

int quadrado (int *num)
{
    return (*num) * (*num);
}
int cubo (int *num)
{
    return (*num)*(*num)*(*num);
}





/*
1 – Escreva um programa que recebe um valor inteiro do usuário e depois
calcula seu quadrado e seu cubo (duas funções). Utilize chamada de
parâmetro por referência.
*/
