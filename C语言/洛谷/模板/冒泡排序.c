#include<stdio.h>
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
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    BubbleSort(num, 3);
    printf("%d %d %d", num[0], num[1], num[2]);
    
}