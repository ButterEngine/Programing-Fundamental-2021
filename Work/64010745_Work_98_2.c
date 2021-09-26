#include<stdio.h>

int main()
{
    char input[1000];
    int count = 0,i = 0;
    scanf("%[^\n]",&input);
    while(input[i] != '\n')
    {
    if(input[i] == 'g' || input[i] == 'G')
    {
        if(input[i-1] == 'o' || input[i-1] == 'O')
        {
            if(input[i-2] == 'r' || input[i-2] == 'R')
            {
                if(input[i-3] == 'f' || input[i-3] == 'F')
                {
                    count++;
                }
            }
        }
    }
    i++;
    }
    printf("%d",count);
}