#include<stdio.h>

#include<string.h>

int main()

{

    char s[100];

    int i;

    scanf("%[^
]%*c",s);

    char ch=s[0];

    for(i=0;i<strlen(s);i++)

    {

        if(ch<s[i])

        ch=s[i];

    }

    printf("%c",ch);

    return 0;

}