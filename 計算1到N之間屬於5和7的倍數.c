#include <stdio.h>

int main()
{
    int n, i, t = 0;
    scanf ("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
        if (i % 35 == 0)
        {
            a[t] = i;
            t++;
        }
    for (i = 0; i < t-1; i++)
        printf ("%d ", a[i]);
    printf ("%d\n", a[t-1]);
    return 0;
}
