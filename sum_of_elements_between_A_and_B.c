#include<stdio.h>

int main()

{

    int n,arr[100],i,r1,r2,min=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    scanf("%d%d",&r1,&r2);

    for(i=0;i<n;i++)

    {

        if(arr[i]>=r1 && arr[i]<=r2)

        min+=arr[i];

    }

    if(min==0)

    {

        printf("-1");

    }

    else

    printf("%d",min);

    return 0;

}