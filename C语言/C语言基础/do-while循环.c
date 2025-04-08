#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int n = 0;
    do
    {
        n ++;
        num /= 10;
    }while(num > 0);
    printf("%d\n", n);
    return 0;

}