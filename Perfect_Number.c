#include<stdio.h>
int main()
{
    int rem,n,i,sum=0;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}