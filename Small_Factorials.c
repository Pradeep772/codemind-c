#include<stdio.h>
int main()
{
    int i,a[100],n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        while(a[i]!=1)
        {
            s=s*a[i],
            a[i]=a[i]-1;
        }
        printf("%d
",s);
    }
}