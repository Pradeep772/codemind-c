#include<stdio.h>

int main()

{

    int n,arr[100],i,c=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

        if(arr[i]==0)

        {

            c++;

            continue;

        }

        else

        {

            printf("%d ",arr[i]);

        }

    }

    for(i=1;i<=c;i++)

    printf("0 ");

    return 0;

}