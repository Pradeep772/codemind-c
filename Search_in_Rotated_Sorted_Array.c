#include<stdio.h>

int main()

{

    int n,arr[100],i,k,p,f=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    scanf("%d",&k);

    for(i=0;i<n;i++)

    {

        if(arr[i]==k)

        {

            p=i;

            f=1;

            break;

        }

    }

    if(f==0)

    printf("-1");

    else

    printf("%d",p);

    return 0;

}