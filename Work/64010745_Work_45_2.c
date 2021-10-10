#include<stdio.h>

int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    return number * factorial(number-1);
}

int main()
{
    int input,output;
    scanf("%d",&input);
    if(input >= 0)
    {
        output = factorial(input);
        printf("%d",output);
    }
    else
    {
        printf("Error");
    }
}