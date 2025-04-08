#include<stdio.h>
int main()
{
    int L;
    scanf("%d", &L);
    int sum = 2;
    int c = 1;
    int r = 1;
    if (L == 1)
    {
        printf("0");
    }
    else
    {
        printf("2\n");
        for (int i = 3; ; i++)
        {
            
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    c = 0;
                }
            }
            if (c == 1)
            {
                sum = sum + i;
                if (sum > L)
                {
                    break;
                }
                printf("%d\n", i);
                r++;
            }
            c = 1;
        }
        printf("%d", r);
    }    
    return 0;
}