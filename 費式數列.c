#include <stdio.h>

int f(int n)
{
    if(n == 1 || n == 2) return 1;
    if(n >= 3)
        return f(n-1)+f(n-2);
}

int main()
{
    int n, a;
    scanf ("%d", &n);
    a = f(n);
    printf ("%d\n", a);
    return 0;
}
