#include<stdio.h>
int main()
{
    int l,w,h,t;
    scanf("%d%d",&l,&t);
    while(t--)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        printf("UPLOAD ANOTHER
");
        else if(w>=l&&h>=l&&w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
    return 0;
}