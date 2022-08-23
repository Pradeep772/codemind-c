#include<stdio.h>

#include<string.h>

int main()

{

    char s[1000];

    int i,v=0,c=0,d=0,w=0;

    scanf("%[^
]%*c",s);

    int n=strlen(s);

    for(i=0;i<n;i++)

    {

        if(s[i]==' ')

        w++;

        if(s[i]>=48 && s[i]<=57)

        d++;

        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I')

        v++;

        else

        c++;

    }

    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c-w,d,w);

}