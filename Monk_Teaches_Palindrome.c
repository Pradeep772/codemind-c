#include<stdio.h>

#include<string.h>

int main()

{

    int t,k,i;

    char s[100],str[100];

    scanf("%d",&t);

    while(t--)

    {

        k=0;

        scanf("%s",s);

        int n=strlen(s);

        strcpy(str,s);

        //strrev(str);

        for(i=n-1;i>=0;i--)

        str[k++]=s[i];

        int p=strcmp(str,s);

        if(p==0 && n%2==0)

        printf("YES EVEN
");

        else if(p==0 && n%2)

        printf("YES ODD
");

        else

        printf("NO
");

    }

    return 0;

}