#include<stdio.h>
int main()
{
    int n,d,c,arr[100],i,f,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    /* for(i=0;i<n;i++)
    printf("%d ",arr[i]);*/
    for(i=0;i<n;i++)
    {
        f=1;
        if(arr[i]==-1)
        continue;
        for(j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
        {
        f++;
        arr[j]=-1;
        }
        }
   if(f==1)
    printf("%d ",arr[i]);
    else
    printf("%d ",arr[i]);
    }
    return 0;
    }