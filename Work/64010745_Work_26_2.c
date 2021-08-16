#include <stdio.h>

int main()
{
    int input,i,j,k = 1,num,c = 0;
    scanf("%d",&input);
    num = (2 * (input - 2)) + 1;
    for(i=0;i<input-1;i++)
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
        }
        if(i == (input - 2) && c != 1)
        {
            printf("\n");
            for(i=0;i<(input * 2) - 1;i++)
            {
                printf("*");
            }
            c++;
            i = -1;
            num = -1;
            k = input;
        }
        if(c == 0)
        {
            num -= 2;
            k++;
        }
        else
        {
            num += 2;
            k--;
        }
        printf("\n");
    }
}