#include <stdio.h>

int main()
{
    int t, m;
    double a = 0;
    scanf ("%d %d", &t, &m);
    if (t > 120)
    {
        a = a+(t-120)*m*1.66;
        t = 120;
    }
    if (t > 60 && t <= 120)
    {
        a = a+(t-60)*m*1.33;
        t = 60;
    }
    if (t <= 60)
        a = a+t*m;
    printf ("%.1lf\n", a);
    return 0;
}
