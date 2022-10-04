#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n%2==0)
    {
   for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    }
    else
    {
        for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("0");
    }
}