#include<stdio.h>
int main()
{
    long int n,d=0,arr[1000],i,f=1,j,c=0,a[100],k=0,max=0,min;
    float avg;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    //printf("
");
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
        {
        f++;
        }
        }
   if(f==arr[i])
   {
    c++;
    a[k++]=arr[i];
   }
    }
    /*for(i=0;i<n;i++)
    printf("%ld ",a[i]);*/
    min=a[0];
    if(c==0)
    {
        printf("-1");
        return 0;
    }
    for(i=0;i<k;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
    }