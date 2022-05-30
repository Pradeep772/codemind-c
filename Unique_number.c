#include<stdio.h>
int main()
{
    int n,arr[100],f=0,i,j,p,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        arr[i++]=d;
        n=n/10;
    }
    for(p=0;p<i;p++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[p]==arr[j])
            {
                f++;
            }
        }
    }
    if(f==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}