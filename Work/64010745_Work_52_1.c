#include<stdio.h>

int main()
{
    int number[10000];
    int c = 0,d = 0;
    int i;
    while (1)
    {
        scanf("%d",&number[c]);
        if(number[c] == 999)
        {
            break;
        }
        c++;
    }
    if(number[0] > number[1])
    {
        for(i = 0;i < c - 1;i++)
        {
            if(number[i] < number[i+1])
            {
                printf("NO");
                break;
            }
            else
            {
                d++;
            }
        }
    }
    else if(number[0] < number[1])
    {
        for(i = 0;i < c - 1;i++)
        {
            if(number[i] > number[i+1])
            {
                printf("NO");
                break;
            }
            else
            {
                d++;
            }
        }
    }
    else
    {
        printf("NO");
    }
    if(d == c-1)
    {
        printf("YES");
    }
}