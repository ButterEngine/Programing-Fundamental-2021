#include<stdio.h>

int main()
{
    int input,a;
    scanf("%d",&input);
    a = input / 2;
    if(a * 2 == input)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}