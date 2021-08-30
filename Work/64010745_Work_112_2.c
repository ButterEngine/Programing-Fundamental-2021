#include<stdio.h>

int main()
{
    char input[1000];
    int i = 0,c = 0;
    scanf("%s",&input);
    while(input[i] != '\0')
    {
       if(input[i] == 'a')
        {
            input[i] = '0';
        }
        else if(input[i] == 'e')
        {
            input[i] = '1';
        }
        else if(input[i] == 'i')
        {
            input[i] = '2';
        }
        else if(input[i] == 'o')
        {
            input[i] = '3';
        }
        else if(input[i] == 'u')
        {
            input[i] = '4';
        }
        i++;
        c++;
    }
    for(i = c;i >= 0; i--)
    {
        printf("%c",input[i]);
    }
    printf("aca");
}