#include<stdio.h>
int facto(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f*=i;
    return f;
}
int main()
{
    int n,d,k,i,s=0;
    scanf("%d",&n);
    k=n;
    while(k)
    {
        d=k%10;
        int f=facto(d);
        s+=f;
        k=k/10;
    }
    if(s==n)
    printf("The number %d is a strong number",n);
    else
     printf("The number %d is not a strong number",n);
     return 0;
}