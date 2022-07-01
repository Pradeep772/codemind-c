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
int main()
{
    int n,i,p1,p2,j,p=1,f=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(isprime(i)==1)
        {
            for(j=i+1;j<=n/2;j++)
            {
                if(isprime(j)==1)
                {
                p=i*j;
                if(p==n)
                {
                    f=1;
                    printf("%d %d",i,j);
                    goto label;
                }
                }
            }
        }
    }
    if(f==0)
    printf("-1");
    label:
    return 0;
}