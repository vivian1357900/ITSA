#include <stdio.h>

int main()
{
    int n, ten, five, one;
    scanf ("%d", &n);
    ten = n/10;
    n = n%10;
    five = n/5;
    n = n%5;
    one = n;
    printf ("NT10=%d\n", ten);
    printf ("NT5=%d\n", five);
    printf ("NT1=%d\n", one);
    return 0;
}
