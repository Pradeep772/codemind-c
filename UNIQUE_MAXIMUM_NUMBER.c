#include<stdio.h>

int main()

{

    int n,arr[100],i,c,max=0,j,f=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

        c=1;

        for(j=0;j<n;j++)

        {

            if(arr[i]==arr[j] && i!=j)

            {

                //arr[j]=0;

                c++;

            }

        }

        if(c==1)

        {

            f=1;

           if(max<arr[i])

           max=arr[i];

        }

    }

    if(f==1)

    printf("%d",max);

    else

    printf("-1");

    return 0;

}