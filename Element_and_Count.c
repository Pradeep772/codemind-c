#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   /*for(i=0;i<n;i++)
    printf("%d",arr[i]);*/
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]==-1)
        continue;
         p+=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            c++;
            arr[j]=-1;
            }
        }
         printf("%d %d ",arr[i],c);
    }
}