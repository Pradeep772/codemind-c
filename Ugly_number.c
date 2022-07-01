#include<stdio.h>
int fun(int n)
{
    if(n==1)
    return 1;
    else if(n%2==0)
    return fun(n/2);
    else if(n%3==0)
    return fun(n/3);
    else if(n%5==0)
    return fun(n/5);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=fun(n);
    if(p==1)
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
    return 0;
}