#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[100];
    int n;
    for (int i = 0;; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == 0)
        {
            n = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    return 0;
}