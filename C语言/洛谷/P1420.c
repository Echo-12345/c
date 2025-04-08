#include<stdio.h>
#include <stdlib.h>
void BubbleSort(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    if (n == 1)
    {
        printf("1");
    }
    else
    {   
        int m = 1;
        int *b = (int *)malloc(n * sizeof(int));;
        int r = 0;
        for (int i = 0; i < n; i++)
        {   if (i == n - 1)
            {
                break;
            }
            if (num[i] + 1 == num[i + 1])
            {
                m++;
                b[r] = m;
            }
            if (num[i] + 1 != num[i + 1])
            {
                b[r] = m;
                r++;
                m = 1;
            }
        }
        if (num[n - 2] + 1 == num[n - 1])
        {
            r++;
        }
        BubbleSort(b, r);
        int c = r - 1;
        int s = b[c];
        printf("%d", s);
    }    
    return 0;
}