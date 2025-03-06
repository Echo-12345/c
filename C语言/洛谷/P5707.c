#include<stdio.h>
#include<math.h>
int main()
{
    int s, v;
    int i;
    int hour, minute;
    scanf("%d %d", &s, &v);
    double num = s * 1.0 / v  ;
    int result = ceil(num);
    if(0 < result && result < 50)
    {
        minute = 50 - result;
        printf("07:%02d", minute );
    }
    for(i = 0;; i++)
    {
        if(0 <= i && i < 7 )
        {
            if(result - i * 60 -50 == 0)
            {
                hour = 8 - i -1;
                printf("%02d:00\n", hour);
            }
            else if(0 < result - i * 60 -50 && result - i * 60 -50 < 60)
            {
                hour = 8 - i - 2;
                minute = 60 - (result - i * 60 -50);
                printf("%02d:%02d", hour, minute);
            }
        }
        if(i >= 7 && i < 19)
        {
            if(result - i * 60 -50 == 0 && i ==7)
            {
                printf("00:00");
            }
            
            if(result - i * 60 -50 == 0 && i != 7)
            {
                hour = 24 - (i - 7);
                printf("%02d:00\n", hour);
            }
            else if(0 < result - i * 60 -50 && result - i * 60 -50 < 60)
            {
                hour = 24 - (i - 6);
                minute = 60 - (result - i * 60 -50);
                printf("%02d:%02d", hour, minute);
            }
            
        }
        if(i >= 19 && i <= 23)
        {
            if(result - i * 60 -50 == 0 && i ==19)
            {
                printf("12:00");
                
            }
            
            if(result - i * 60 -50 == 0 && i != 19)
            {
                hour = 12 - (i - 19);
                printf("%02d:00\n", hour);
            }
            else if(0 < result - i * 60 -50 && result - i * 60 -50 < 60 && i != 23)
            {
                hour = 12 - (i -18);
                minute = 60 - (result - i * 60 -50);
                printf("%02d:%02d", hour, minute);
            }
            else if(0 < result - i * 60 -50 && result - i * 60 -50 <= 10 && i == 23)
            {
                minute = 60 -(result - i * 60 -50 );
                printf("07:%02d",  minute);
            }
            
        }
        if(i >23)
        {
            break;
        }
        if(result - i * 60 -50 < 0)
        {
            break;
        }
        
    }
    return 0;

}

