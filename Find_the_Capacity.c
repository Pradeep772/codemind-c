#include<stdio.h>
int main()
{
    int s,t,b,c;
    float cb;
    scanf("%d%d%d",&s,&t,&b);
    c=s*t*b;
    cb=(float)c/1024;
    printf("%d",c);
    printf("KB");
}