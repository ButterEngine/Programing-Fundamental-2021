#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b = a-1;
    c = a;
    while(a > 0)
    {
        printf("*");
        a--;
        if(a == 0 && b > 0)
        {
            printf("\n");
            b--;
            a = c;
        }
    }
    return 0;
}