#include <stdio.h>

int main()
{
    long long int t;
    int day, hr, min, sec;
    scanf("%lld", &t);
    sec = t % 60;
    t = t / 60;
    min = t % 60;
    t = t / 60;
    hr = t % 24;
    day = t / 24;
    printf("%d days\n", day);
    printf("%d hours\n", hr);
    printf("%d minutes\n", min);
    printf("%d seconds\n", sec);
    return 0;
}
