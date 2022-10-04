#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c,s=0,e=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
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
     //printf("%d",arr[i]);
     if(arr[i]==c)
     {
     e++; 
     s+=arr[i];
     }
    }
    if(e==0)
    {
        printf("-1");
        return 0;
    }
    avg=(float)(s/e);
    //printf("%d %d ",s,e);
    printf("%.2f",(float)s/e);
}