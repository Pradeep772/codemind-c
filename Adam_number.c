#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,rev=0,p,i,j=0;
    scanf("%d",&n);
    m=n*n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    p=rev*rev;
    while(p>0)
    {
        i=p%10;
        j=(j*10)+i;
        p=p/10;
    }
    if(j==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    
}