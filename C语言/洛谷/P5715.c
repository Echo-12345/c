#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && a==c)
    {
        printf("%d %d %d", a, b, c);
    }
    if(a == b && a > c)
    {
        printf("%d %d %d", c, b, a);
    }
    if(c == b && c > a)
    {
        printf("%d %d %d", a, b, c);
    }
    if(a == c && a > b)
    {
        printf("%d %d %d", b, c, a);
    }
    if(a < b && c < b)
    {
        if(a <= c)
        {
            printf("%d %d %d", a, c, b);
        }
        else
        {
            printf("%d %d %d", c, a, b);
        }
    }
    if(a < c && b < c)
    {
        if(a <= b)
        {
            printf("%d %d %d", a, b, c);
        }
        else
        {
            printf("%d %d %d", b, a, c);
        }
    }
    if(b < a && c < a)
    {
        if(b <= c)
        {
            printf("%d %d %d", b, c, a);
        }
        else
        {
            printf("%d %d %d", c, b, a);
        }
    }
        
    return 0;
    
}