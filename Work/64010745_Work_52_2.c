#include<stdio.h>

int main()
{
    int number[10000];
    int c = 0,d = 0,e = 0;
    int i;
    for(i = 0;i != -1;i++)
    {
        scanf("%d",&number[i]);
        if(number[i] == 999)
        {
            break;
        }
        c++;
    }
    for(i = 0;i < c - 1;i++)
    {
        if(number[i] > number[i+1])
        {
            d++;
        }
        else if(number[i] < number[i+1])
        {
            e++;
        }
    }
    if(d == c - 1 || e == c - 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}