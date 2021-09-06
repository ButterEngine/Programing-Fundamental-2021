#include<stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    while(input > 1 || input < -1)
    {
        if(input > 0)
        {
            input = input - 2;
        }
        else
        {
            input = input + 2;
        }
    }
    if(input == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}