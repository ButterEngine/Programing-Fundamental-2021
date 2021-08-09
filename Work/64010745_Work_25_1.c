#include<stdio.h>

int main()
{
    int a,b;
    int i,j,k;
    int c = 1;
    scanf("%d",&a);
    b = a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<c;k++)
        {
            printf("*");
        }
        printf("\n");
        c += 2;
        b--;
    }
}