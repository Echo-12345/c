#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double num = (10 * a + b) / 19;
    int result = ceil(num);
    printf("%d\n", result);
    return 0;
}