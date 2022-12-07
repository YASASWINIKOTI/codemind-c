#include<stdio.h>
int main()
{
    int n,s,r,q=0,d,p,s1=0;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        r=n%10;
        q=q*10+r;
        n=n/10;
    }
    d=q*q;
    while(d!=0)
    {
        p=d%10;
        s1=s1*10+p;
        d=d/10;
    }
    if(s1==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}