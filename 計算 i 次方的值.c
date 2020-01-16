#include <stdio.h>
#include <math.h>
int main()
{
    int a, i;
    long long int b = 1;
    scanf ("%d", &a);
    if (a > 31) printf ("Value of more than 31\n");
    else
    {
        for (i = 0; i < a; i++)
            b *= 2;
        printf ("%lld\n", b);
    }
    return 0;
}
