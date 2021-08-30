#include<stdio.h>
#include<string.h>

int main()
{
    char input[1000];
    int i;
    scanf("%s",&input);
    int len = strlen(input);
    for(i = len-1;i >= 0 ;i--)
    {
        if(input[i] == 'a')
        {
            printf("0");
        }
        else if(input[i] == 'e')
        {
            printf("1");
        }
        else if(input[i] == 'i')
        {
            printf("2");
        }
        else if(input[i] == 'o')
        {
            printf("3");
        }
        else if(input[i] == 'u')
        {
            printf("4");
        }
        else
        {
            printf("%c",input[i]);
        }
    }
    printf("aca");
    return 0;
}