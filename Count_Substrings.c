#include<stdio.h>
int main()
{
    int t,n,i,j,c,p;
    char s[100];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        p=0;
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            p++;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            continue;
            else
            {
                for(j=i+1;j<n;j++)
                {
                    if(s[j]=='1')
                    c++;
                }
            }
        }
        printf("%d
",c+p);
    }
    return 0;
}