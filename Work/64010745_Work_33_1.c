#include<stdio.h>

int main()
{
    int input[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&input[i]);
    }
    printf("Data in array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",input[i]);
    }
    printf("\nResult: ");
    for(i=1;i<9;i++)
    {
        if(input[i-1] % 2 != 0 && input[i+1] %2 != 0)
        {
            printf("%d ",input[i]);
        }
    }
}