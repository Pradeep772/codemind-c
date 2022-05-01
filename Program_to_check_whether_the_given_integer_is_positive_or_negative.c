#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative Number");
    }
    else if(n=0)
    {
        printf("neither positive nor negative");
    }
    else
    {
        printf("Positive Number");
    }
    return 0;
}