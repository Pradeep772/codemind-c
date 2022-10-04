#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,p1,p2,max=0,c=0,r1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=n-1;i>=0;i--)
    {
        max=max+arr[i]*pow(2,c++);
    }
    printf("%d",max);
    return 0;
}

