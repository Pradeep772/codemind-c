#include<stdio.h>
int isprime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
    if(n%i==0)
    f++;
    if(f==2)
    return 1;
    else
    return 0;
}
int ispal(int n)
{
    int d,rev=0,k;
    k=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==k)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n++)
    {
        if(isprime(n)==1 && ispal(n)==1)
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}