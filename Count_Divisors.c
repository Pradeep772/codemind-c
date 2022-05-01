#include<stdio.h>
int main()
{
    int l,r,k,i,c=0;
    scanf("%d%d%d",&l,&r,&k);
    if(l<r)
    {
        for(i=l;i<=r;i++)
        {
            if(i%k==0)
            {
                c++;
            }
        }
        printf("%d",c);
    }
    else
    {
        for(i=r;i<=l;i++)
        {
            if(i%k==0)
            {
                c++;
            }
        }
        printf("%d",c);
    }
}