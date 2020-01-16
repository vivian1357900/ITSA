#include <stdio.h>

int f91(int n)
{
    if(n <= 100) return f91(f91(n+11));
    if(n > 100) return n-10;
}

int main()
{
    int t, i;
    scanf("%d", &t);
    int f[t];
    for(i = 0; i < t; i++)
        scanf ("%d", &f[i]);
    for (i = 0; i < t; i++)
    {
        int a = f91(f[i]);
        printf ("%d\n", a);
    }

    return 0;
}
