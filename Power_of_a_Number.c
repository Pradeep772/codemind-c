#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    a=pow(x,y);
    b=a%m;
    printf("%d",b);
}