#include<stdio.h>

int main()

{

    int n,arr[100],c,j,i,f=0,d;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

        c=1;

        for(j=i+1;j<n;j++)

        {

            if(arr[i]==arr[j])

            {

                f=1;

               // d=arr[i];

                break;

            }

        }

        if(f==1)

        {

        printf("%d",arr[i]);

        break;

        }

    }

    return 0;

}