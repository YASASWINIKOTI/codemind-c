#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ar,a1,a2,a3;
    a1=l*b;
    a2=(l+2*w)*(b+2*w);
    a3=a2-a1;
    ar=a3*c;
    printf("%d",ar);
}