#include <stdio.h>

int main()
{
    int n, i;
    long long int a = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        if(i % 3 == 0)
            a += i;
    printf ("%lld\n", a);
    return 0;
}
