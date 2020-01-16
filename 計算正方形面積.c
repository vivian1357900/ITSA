#include <stdio.h>
int main()
{
    double a, b;
    scanf ("%lf", &a);
    b = a*a;
    b = ((b*10)+0.5)/10;
    printf ("%.1lf\n", b);
    return 0;
}
