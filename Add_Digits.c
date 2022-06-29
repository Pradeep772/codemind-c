#include<stdio.h>
int sum(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        s+=d;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n;
    while(true)
    {
        if(s<10)
        {
            printf("%d",s);
            break;
        }
        else
        {
            s=sum(n);
        }
        n=s;
    }
}