#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    N = 3 * N; 
    int num[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    int s = 0;
    for (int i = 0; i < N; i = i + 3)
    {
        int a = i;
        int b = i + 3;
        for (int j = b; j <= N - 3; j = j + 3)
        {
            int x = num[a] - num[j];
            int y = num[a + 1] - num[j + 1];
            int z = num[a + 2] - num[j + 2];
            int q = num[a] + num[a + 1] + num[a + 2];
            int p = num[j] + num[j + 1] + num[j + 2];
            if (x * x <= 25 && y * y <= 25 && z * z <= 25 && (q - p) * (q - p) <= 100)
            {
                s++;
            }
        }
    }
    printf("%d", s);
    return 0;
}