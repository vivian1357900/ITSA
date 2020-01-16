#include <stdio.h>

int main()
{
    int n, i, j;
    scanf ("%d", &n);
    for (i = n; i > 0; i--)
    {
        for(j = 2; j < i; j++)
            if(i % j == 0) break;
        if (j == i) break;
    }
    printf ("%d\n", i);
    return 0;
}
