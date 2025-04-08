#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    int min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i]; 
    }
    sum = sum - min - max;
    double s = sum * 1.0 / (n - 2);
    printf("%.02f", s);
    return 0;
}