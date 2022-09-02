#include<stdio.h>

int main()

{

    int n,arr[100],k,i,p1=0,p2=0,f=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    scanf("%d",&k);

    for(i=0;i<n;i++)

    {

        if(arr[i]==k)

        {

            f=1;

            p1=i;

            break;

        }

    }

    p2=p1;

    for(i=p2+1;i<n;i++)

    {

        if(arr[i]==k)

        {

            f=1;

            if(p2<i)

            p2=i;

        }

    }

    if(f==1)

    printf("%d %d",p1,p2);

    else

    printf("-1 -1");

    return 0;

}