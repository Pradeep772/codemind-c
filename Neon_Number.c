#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,a,temp,s=0;
    scanf("%d",&n);
    a=n*n;
    
    while(a)
    {
        d=a%10;
        a=a/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}