#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    gets(input);
    int lenght = strlen(input),i,output = 0;
    for(i = 0; i < lenght; i++)
    {
        if(input[i] == 'F' || input[i] == 'f')
        {
             if(input[i+1] == 'R' || input[i+1] == 'r')
             {
                 if(input[i+2] == 'O' || input[i+2] == 'o')
                 {
                     if(input[i+3] == 'G' || input[i+3] == 'g')
                     {
                         output++;
                     }
                 }
             }
        }
    }
    printf("%d",output);
}