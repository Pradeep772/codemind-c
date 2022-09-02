#include<stdio.h>

int main()

{

    int n,arr[100],i,j,c,p=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

        c=1;

        if(arr[i]==-1)

        continue;

        for(j=i+1;j<n;j++)

        {

            if(arr[i]==arr[j])

            {

                c++;

                arr[j]=-1;

            }

        }

        if(c%2==0)

        {

            p=p+c/2;

        }

        else

        {

            p=p+(c-1)/2;

        }

    }

    printf("%d",p);

    return 0;

}