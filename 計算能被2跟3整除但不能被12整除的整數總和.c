#include <stdio.h>

int main()
{
    int n, i, a = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        if (i%2 == 0 && i%3 == 0 && i%12 != 0)
            a += i;
    printf ("%d\n", a);
    return 0;
}
