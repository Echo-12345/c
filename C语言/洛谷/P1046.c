#include<stdio.h>
int main()
{
    int i, m, s[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }
    scanf("%d", &m);
    int a = m + 30;
    int r = 0;
    for(i = 0; i < 10; i++)
    {
        if(s[i] <= a)
        {
            r = r + 1;
        }
        else
        {
            r = r;
        }
    }
    printf("%d", r);
    return 0;

}