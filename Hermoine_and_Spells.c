#include<stdio.h>
int main()
{
    int a,b,c,p,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=a+b;
    y=b+c;
    z=a+c;
    if(x>y)
    {
        printf("%d",x);
    }
    else if(y>z)
    {
        printf("%d",y);
    }
    else if(z>x)
    {
        printf("%d",z);
    }
}