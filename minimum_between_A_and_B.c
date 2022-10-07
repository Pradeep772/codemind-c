#include<stdio.h>

int main()

{

    int n,arr[100],i,r1,r2,min=0,f=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    //for(i=0;i<n;i++)

    //printf("%d ",arr[i]);

    scanf("%d%d",&r1,&r2);

   // printf("
%d %d",r1,r2);

    for(i=0;i<n;i++)

    {

        if(arr[i]>=r1 && arr[i]<=r2)

        {

            f=1;

            min=arr[i];

            break;

        }

    }

    if(f==0)

    {

        printf("-1");

        return 0;

    }

    for(i=0;i<n;i++)

    {

        if(arr[i]>=r1 && arr[i]<=r2)

        {

            if(min>arr[i])

            min=arr[i];

        }

    }

    printf("%d",min);

    return 0;

}