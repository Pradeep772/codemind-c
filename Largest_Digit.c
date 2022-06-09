#include<stdio.h>
int main()
{
    int n,d=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(d<r)
        {
            d=r;
        }
        n=n/10;
        
    }
    printf("%d",d);
}