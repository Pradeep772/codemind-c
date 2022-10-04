#include<stdio.h>
int main()
{
    int n,arr[100],i,k,j,c,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]==-1)
        continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
                c++;
            }
        }
        if(k==c)
        {
            f=1;
            printf("%d ",arr[i]);
        }
    }
    if(f==0)
    printf("-1");
}