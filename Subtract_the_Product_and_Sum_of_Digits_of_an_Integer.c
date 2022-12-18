#include<stdio.h>
int main()
{
    int n,r,p=1,s=0,m;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    m=p-s;
    printf("%d",m);
}