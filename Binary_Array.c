#include<stdio.h>

#include<math.h>

int main()

{

    int n,arr[100],i,p1,p2,max=0,c=0,r1;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=n-1;i>=0;i--)

    {

        if(arr[i]==0 || arr[i]==1)

        {

            c++;

        }

    }

    if(c==n)

    printf("True");

    else

    printf("False");

    return 0;

}