#include <stdio.h>

int main()
{
    int n, i, j;
    scanf ("%d", &n);
    for(i = 2; i < n; i++)
        if(n % i == 0)
        {
            printf ("NO\n");
            break;
        }
    if (i == n) printf ("YES\n");
    return 0;
}
