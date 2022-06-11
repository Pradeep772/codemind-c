#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=pow(a[i],0.5);//sqrt(t)
        if(sq*sq==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}