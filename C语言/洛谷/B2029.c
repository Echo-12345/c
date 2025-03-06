#include<stdio.h>
#include<math.h>
int main()
{
    int h, r;
    scanf("%d %d", &h, &r);
    double v = r * r * 3.14 * h;
    double result = 20 * 1000 / v;
    int num = ceil(result);
    printf("%d\n",num);
    return 0; 
}