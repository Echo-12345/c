#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int n = 1;
    num = num/10;
    while(num > 0)
    {
        n = n + 1;
        num = num/10;
    }
    printf("%d\n", n);
    return 0;
}


