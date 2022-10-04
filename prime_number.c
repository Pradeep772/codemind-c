#include<stdio.h>

int isprime(int n)

{

    int i,f=0;

    for(i=1;i<=n;i++)

    {

        if(n%i==0)

        f++;

    }

    if(f==2)

    return 1;

    else

    return 0;

    

}

int main()

{

    int n,d,i,j=0,c=0;

    scanf("%d",&n);

    if(isprime(n)==0)

    printf("not a prime");

    else

printf("prime");

    return 0;

}