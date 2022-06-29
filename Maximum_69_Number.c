#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='6')
        {
            str[i]='9';
            printf("%s",str);
            return 0;
        }
    }
    printf("%s",str);
    return 0;
}