#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("%d
%d",a,b);
    
}