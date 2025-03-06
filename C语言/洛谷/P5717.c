#include<stdio.h>
#include<math.h>
int main()
{
    //pow(n, m);

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
        if((a >= b && a >= c && a >= b + c) ||
        (b >= a && b >= c && b >= a + c) ||
        (c >= b && c >= a && c >= a + b))
        {
            printf("Not triangle\n");
            return 0;
        }
        if(a * a + b * b == c * c ||
            c * c + b * b == a * a ||
            c * c + a * a == b * b)
        {
            printf("Right triangle\n");
        }
        if((a >= b && a >= c && a * a < b * b + c * c) ||
        (b >= a && b >= c && b * b < a * a + c * c) ||
        (c >= b && c >= a && c  * c < a * a + b * b))
        {
            printf("Acute triangle\n");
        }
        if((a >= b && a >= c && a * a > b * b + c * c) ||
        (b >= a && b >= c && b * b > a * a + c * c) ||
        (c >= b && c >= a && c  * c > a * a + b * b))
        {
            printf("Obtuse triangle\n");
        }
        if(a == b || a == c || b == c)
        {
            printf("Isosceles triangle\n");
        }
        if( a == b && a == c)
        {
            printf("Equilateral triangle\n");
        }
        
    return 0;
}