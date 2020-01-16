#include <stdio.h>
int main()
{
    double a, b;
    scanf ("%lf", &a);
    b = a*9/5+32;
//    b = ((b*10)+0.5)/10;
    printf ("%.1lf\n", b);
    return 0;
}
