#include<stdio.h>

int main()

{

    int n,arr[100],i,p1,p2,max=0,c=0,r1;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

     max+=arr[i];   

    }

    r1=max/n;

    for(i=0;i<n;i++)

    {

        if(arr[i]>=r1)

        c++;

    }

    printf("%d",c);

    return 0;

}

