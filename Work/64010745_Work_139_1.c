#include<stdio.h>

int main()
{
    int hour = 0,minute = 0,second;
    scanf("%d",&second);
    while(second >= 3600 )
    {
        second = second - 3600;
        hour++;
    }
    while(second >= 60)
    {
        second = second - 60;
        minute++;
    }
    printf("%d",hour);
    if(minute < 10)
    {
        printf(":0%d",minute);
    }
    else
    {
        printf(":%d",minute);
    }
    if(second < 10)
    {
        printf(":0%d",second);
    }
    else
    {
        printf(":%d",second);
    }

}