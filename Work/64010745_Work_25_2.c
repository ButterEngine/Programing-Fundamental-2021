#include<stdio.h>

int main()
{
    int a,b,c = 1,d = 0;
    int i = 0,j = 0,k = 0;
    scanf("%d",&a);
    b = a;
    while(k < b)
    {
        if(d == 0)
        {
            while(i < b-1)
            {
                printf(" ");
                i++;
            }
            d++;
        }
        if(d != 0)
        {
            while(j < c)
            {
            printf("*");
            j++;
            }
            c += 2;
        }
        printf("\n");
        b--;
        d = 0;
        i = 0;
        j = 0;
    }
}