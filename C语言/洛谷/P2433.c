#include<stdio.h>
#include<math.h>
int main()
{
    int T ;
    scanf("%d", &T);
    if(T == 1)
    {
        printf("I love Luogu!");
    }
    else if(T == 2)
    {
        printf("6 4");
    }
    else if(T ==3)
    {
        printf("3\n12\n2");
    }
    else if(T == 4)
    {
        double num = 500.0 / 3;
        printf("%.3f\n", num);
    }
    else if(T == 5)
    {
        int num = (260 + 220) / 32;
        printf("%d\n", num);

    }
    else if(T == 6)
    {
        double num = sqrt(117);
        printf("%.4f", num);
    }
    else if(T == 7)
    {
        printf("110\n90\n0");
    }
    else if(T == 8)
    {
        double pi = 3.141593;
        double l = 2 * pi * 5;
        double s = pi * 25;
        double v = pi * 125 * 4.0 / 3;
        printf("%.4f\n%.4f\n%.4f\n", l, s, v);
    }
    else if(T == 9)
    {
        printf("22");
    }
    else if(T == 10)
    {
        printf("9");
    }
    else if(T ==11)
    {
        double num = 100.0 / 3;
        printf("%.4f", num);
    }
    else if(T == 12)
    {
        printf("13\nR");
    }
    else if(T == 13)
    {
        double num = 3.141593 * 64 * 4 / 3 + 3.141593  * 1000 * 4 / 3;
        double result = pow(num, 1.0 / 3);
        int l = result;
        printf("%d\n", l);
    }
    else if(T == 14)
    {
        printf("50");
    }
    return 0;

}