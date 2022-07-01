#include<stdio.h>
int ispal(int n)
{
    int k,d,rev=0;
    k=n;
    while(k)
    {
        d=k%10;
        rev=rev*10+d;
        k=k/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(ispal(n-i)==1 && ispal(n+i))
        {
            printf("%d %d",n-i,n+i);
            break;
        }
        else if(ispal(n-i)==1)
        {
            printf("%d",n-i);
            break;
        }
        else if(ispal(n+i)==1)
        {
            printf("%d",n+i);
            break;
        }
    }
    return 0;
}