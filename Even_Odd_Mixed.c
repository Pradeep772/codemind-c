#include<stdio.h>
int main()
{
    int n,d,ec=0,oc=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        c++;
        if(d%2==0)
        {
            ec++;
            
        }
        else if(d%2!=0)
        {
            oc++;
            
        }
    }
    if(ec==c)
    {
        printf("Even");
    }
    else if(oc==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    
}