#include<stdio.h>
int main()
{
    int n,q,r,sum=0;
    scanf("%d",&n);
    q=n*n;
    while(q!=0)
    {
        r=q%10;
        sum=sum+r;
        q=q/10;
    }
    if (sum==n)
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
}