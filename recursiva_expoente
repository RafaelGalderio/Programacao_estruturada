#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power (int base, int expoente);
int main()
{int base, expoente;
    printf ("Informe um base e depois um expoente:\n");
    scanf ("%d %d",&base,&expoente);
    printf ("O valor da exponenciacao eh %d:",power(base,expoente));
    return 0;
}

int power (int base, int expoente)
{
    if (expoente==0)
    {
        return 1;
    }
    if (expoente==1)
    {
        return base;
    }
    else
    {
        return base*power(base,expoente-1);
    }
}

/*
 Escreva uma função recursiva power(base,expoente) que
quando chamada retorna baseexpoente
*/
