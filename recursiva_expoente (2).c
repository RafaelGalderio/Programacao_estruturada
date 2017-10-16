#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long fatorial (long n);
int main()
{long n;
    printf ("Informe um valor de n para calcular o fatorial:");
    scanf("%ld",&n);
    printf ("\nO valor do fatorial de %ld eh: %ld",n,fatorial(n));
    return 0;
}

long fatorial (long n)
{
    if (n<=1)
    {
        return 1;
    }
else
    {
        return (n*fatorial(n-1));
    }
}
