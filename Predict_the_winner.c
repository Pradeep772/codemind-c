#include<stdio.h>

#include<stdlib.h>

int main()

{

    int n,arr[100],i,s=0,s1=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)

    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)

    {

        if(i%2==0)

        s=s+arr[i];

        else

        s1=s1+arr[i];

    }

    if(abs(s1-s)%4==0)

    printf("X");

    else

    printf("Y");

    return 0;

}