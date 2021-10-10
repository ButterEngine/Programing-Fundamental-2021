#include<stdio.h>

int factorial(int number)
{
    if(number > 0)
    {
        int i = number - 1;
        while(i > 0)
        {
          number *= i;
          i--;
        }
        return number;
    }
    if(number == 0)
    {
        return 1;
    }
}
int main()
{
     int input,output;
     scanf("%d",&input);
     output = factorial(input);
     if(input >= 0)
     {
         printf("%d",output);
     }
     else
     {
         printf("Error");
     }
}