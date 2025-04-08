#include<stdio.h>
int main()
{
    int N;
    int num = 0;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("0");
    }
    if (N > 0)
    {
        while(N != 0)
        {
            int temp = N % 10;
            num = 10 * num + temp;
            N = N / 10;
        }
        printf("%d", num);
    }
    if (N < 0)
    {
        N = -1 * N;
        while(N != 0)
        {
            int temp = N % 10;
            num = 10 * num + temp;
            N = N / 10;
        }
        int num1 = -1 * num;
        printf("%d", num1);
    }
    return 0;
}