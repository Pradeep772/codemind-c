#include<stdio.h>

int isprime(int n)

{

    int i,f=0;

    for(i=1;i<=n;i++)

    if(n%i==0)

    f++;

    if(f==2)

    return 1;

    else 

    return 0; 

}

int main()

{

    int n,rn=0,d;

    scanf("%d",&n);

    int t=n;

    while(t)

    {

        d=t%10;

        rn=rn*10+d;

        t=t/10;

    }

    if(isprime(n)==1 && isprime(rn)==1)

    printf("circular prime");

    else if(isprime(n)==1 || isprime(rn)==1)

    printf("prime but not a circular prime");

    else 

    printf("not prime");

}