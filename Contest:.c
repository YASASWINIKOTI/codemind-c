#include<stdio.h>
int main()
{
    int x,a,b,q;
    scanf("%d%d%d",&x,&a,&b);
    q=a*1+b*2;
    if (q>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}