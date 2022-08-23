#include<stdio.h>

#include<string.h>

int main()

{

    char s[1000];

    int i,j,c,max=0,n;

    scanf("%s",s);

    n=strlen(s);

    for(i=0;i<n;i++)

    {

        c=1;

        for(j=i+1;j<n;j++)

        {

            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')

            {

                if(s[j]=='a'||s[j]=='e'||s[j]=='i'|| s[j]=='o'||s[j]=='u')

                {

            c++;

            continue;

                }

            }

            break;

        }

        if(max<c)

        max=c;

    }

    printf("%d",max);

    return 0;

}