#include<stdio.h>
int main()
{
    long int t,n,k,a,b,c=0,i;
    scanf("%ld",&t);
    while(t)
    {
        c=0;
        scanf("%ld%ld%ld%ld",&n,&a,&b,&k);
        if(a%b==0)
        c=n/b-n/a;
        else if(b%a==0)
        c=n/a-n/b;
        else
        c=n/a+n/b-2*(n/(a*b));
        if(c>=k)
        printf("Win
");
        else
        printf("Lose
");
        t--;
    }
    return 0;
}