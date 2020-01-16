#include <stdio.h>

int main()
{
    int n, i;
    float a;
    scanf ("%d", &n);
    if (n <= 800)
        printf ("%.1f\n", n*0.9);
    else if (n > 800 && n < 1500)
        printf ("%.1f\n", n*0.9*0.9);
    else if (n >= 1500)
        printf ("%.1f\n", n*0.9*0.79);
    return 0;
}
