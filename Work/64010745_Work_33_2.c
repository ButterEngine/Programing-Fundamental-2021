#include<stdio.h>

int main()
{
    int input[10],i,j = 0;
    int output[8];
    for(i=0;i<10;i++)
    {
        scanf("%d",&input[i]);
        if(i > 1  && i < 10)
        { 
            if(input[i - 2] % 2 != 0 && input[i] % 2 != 0)
            {
                output[j] = input[i-1];
                j++;
            }
        }
    }
    printf("Data in array: ");
    for(i = 0; i < 10 ; i++)
    {
        printf("%d ",input[i]);
    }
    printf("\nResult: ");
    for(i = 0; i < j ; i++)
    {
        printf("%d ",output[i]);
    }
}