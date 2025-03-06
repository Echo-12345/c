#include<stdio.h>
int main()
{
    int a, b, c, d;
    int e, f;
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    if (b > d)
    {
        f = 60 - b + d;
        e = c - a - 1;
    }
    else
    {
        f = d - b;
        e = c - a;
    }
    printf("%d %d\n", e, f);
    return 0;
}