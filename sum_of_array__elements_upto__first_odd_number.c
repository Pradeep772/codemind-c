#include<stdio.h>

/*int fun(int *arr,int n,int k)

{

    int s=0;

    for(int j=0;j<n;j++)

    {

        if(arr[i]==k)

        return (s+k);

            s+=arr[j];

    }

}*/

int  main()

{

    int n,arr[1000],k,s=0,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    //int p=fun(arr,n,k);

    for(int j=0;j<n;j++)

    {

        if(arr[j]%2==0)

        {

        s+=arr[j];

        }

        else break;

    }

     printf("%d",s);

}