#include<stdio.h>

int main()

{

    int n,arr[100],i,r1,r2,max=0,f=0;

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

            if(max<arr[i])

            max=arr[i];

        }

    }

        if(f==0)

    {

        printf("-1");

        return 0;

    }

    printf("%d",max);

    return 0;

}