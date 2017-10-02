#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 5, *p = &i;
printf ("%u %d %d \n", p, *p+2, 3**p);
}
