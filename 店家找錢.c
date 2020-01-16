#include <stdio.h>

int main()
{
    int n, c, r[6], i, t = 0;
    int m[6] = {500, 100, 50, 10, 5, 1};
    scanf ("%d", &n);
    scanf ("%d", &c);
    for (i = 0; i < 6; i++)
        scanf ("%d", &r[i]);
    c = 1000 - n*c;
    for (i = 0; i < 6; i++)
    {
        int tmp = c / m[i];
        if (tmp > r[i]) tmp = r[i];
        c = c - tmp*m[i];
        t += tmp;
    }
    printf ("%d\n", t);
    return 0;
}
