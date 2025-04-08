#include<stdio.h>
int main()
{
    int num[12];
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &num[i]);
    }
    int reserve = 300;
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        if (reserve < num[i])
        {
            int n = i + 1;
            printf("-%d", n);
            return 0;
        }
        else
        {
            reserve = reserve - num[i];
            sum = sum + reserve / 100 * 100;
            reserve = reserve % 100 + 300;
        }
    }
    reserve = reserve - 300;
    sum = sum * 1.2 + reserve;
    printf("%d", sum);
    return 0;    
}