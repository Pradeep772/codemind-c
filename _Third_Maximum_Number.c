#include<stdio.h>

int main()

{

    int arr[100000],i,j,k,n,t=0,q;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&arr[i]);

    }

    q=n;

        for(i=0;i<n;i++)

        {

            for(j=i+1;j<q;j++)

            {

                if(arr[i]==arr[j])

                {

                    for(k=j;k<n;k++)

                    {

                        arr[k]=arr[k+1];

                    }

                    j--;

                    q--;

                }

            }

        }

        for(i=0;i<q;i++)

        {

            for(j=i+1;j<q;j++)

            {

                if(arr[i]>arr[j])

                {

                    t=arr[i];

                    arr[i]=arr[j];

                    arr[j]=t;

                }

            }

        }

        if(q>=3)

        printf("%d",arr[q-3]);

        else if(q==2)

        printf("%d",arr[q-4]);

}