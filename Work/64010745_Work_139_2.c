#include<stdio.h>

int main()
{
    int hour,minute,second;
    scanf("%d",&second);
    hour = second / 3600;
    second = second - (3600 * hour);
    minute = second / 60;
    second = second - (60 * minute);
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