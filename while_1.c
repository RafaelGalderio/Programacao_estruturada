#include <stdlib.h>

int main()
{
    int n, maior_01=0,maior_02=0,maior_03=0,contador=0, valor=0;
    printf ("Informe a quantidade de numeros: ");
    scanf("%i",&n);
    while (n>contador)
    {
        printf ("Informe um valor: ");
        scanf ("%d",&valor);
        if (valor>maior_01 && valor>maior_02 && valor>maior_03)
        {
            maior_03=maior_02;
            maior_02=maior_01;
            maior_01=valor;
        }
        if else (valor>maior_02 && valor>maior_03)
            {
                maior_03=maior_02;
                maior_02=valor;
            }
        if else (valor>maior03)
            {
                maior_03=valor;
            }
        contador++;
    }
    printf ("O maior valores eh: %d %d %d",maior_01,maior_02,maior_03);

    return 0;
}
