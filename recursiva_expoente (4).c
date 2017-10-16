#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fibo (int n);
int main()

{int n;
printf ("\nInforme o valor de n: ");
scanf("%d",&n);
printf("\n%d",fibo(n));
return 0;
}

int fibo (int n )
    {
        int r;
        if (n<=1)
            {
            return 1;
            }

        if (n==0)
            {
             return 0;
            }
        r=fibo(n-1)+fibo(n-2);
        return(r);
    }

