#include<stdio.h>

int main()

{

    int n,arr[1000],i,j,c,p=0,x;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    /*for(i=0;i<n;i++)

    printf("%d ",arr[i]);*/

    for(i=0;i<n;i++)

    {

        c=1;

        if(arr[i]==-1)

        continue;

        if(arr[i]%2==0)

        continue;

         p+=arr[i];

        for(j=i+1;j<n;j++)

        {

            x=0;

            if(arr[i]==arr[j])

            {

            x=1;

           // c++;

            //p+=arr[i];

            arr[j]=-1;

            //continue;

            }

           // p+=arr[i];

        }

        if(c==1 && arr[i]%2==0)

        {

            //p+=arr[i];

        }

    }

    printf("%d",p);

}