#include<stdio.h>
int main()
{
    int n,q,r,s=0;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (q==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
