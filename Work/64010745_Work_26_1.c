#include <stdio.h>

int main()
{
    int input,i,j,k = 1,num;
    scanf("%d",&input);
    num = (2 * (input - 2)) + 1;
    for(i=0;i<input;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("*");
        }
        for(j=0;j<num;j++)
        {
            printf(" ");
        }
        for(j=0;j<k;j++)
        {
            printf("*");
            if(j == input - 2)
            {
                j++;
            }
        }
        num -= 2;
        printf("\n");
        k++;
    }
    num = input;
    k = 1;
    for(i = 0;i<num - 1;i++)
    {
         for(j=0;j<input - 1;j++)
        {
            printf("*");
        }
        for(j=0;j<k;j++)
        {
            printf(" ");
        }
        for(j=0;j<input - 1;j++)
        {
            printf("*");
        }
        printf("\n");
        k += 2;
        input--;
    }
}