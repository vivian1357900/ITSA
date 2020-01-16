#include <stdio.h>

int main()
{
    int t, i, a[8] = {0}, n;
    scanf("%d", &t);
    if (t < 0)
    {
        t = -t;
        for (i = 7; i >= 0; i--)
        {
            a[i] = t % 2;
            t /= 2;
        }
        for (i = 0; i < 8; i++)
        {
            if(a[i] == 1) a[i] = 0;
            else a[i] = 1;
        }
        n = 7;
        a[n]++;
        while (a[n] > 1)
        {
            a[n] = 0;
            n--;
            a[n]++;
        }
    }
    else
        for (i = 7; i >= 0; i--)
        {
            a[i] = t % 2;
            t /= 2;
        }

    for (i = 0; i < 8; i++)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}
