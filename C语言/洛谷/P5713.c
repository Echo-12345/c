#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 5 * n;
    int b = 3 * n + 11;
    if(a < b)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }
    return 0;
}