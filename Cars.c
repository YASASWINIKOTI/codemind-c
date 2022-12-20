#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=n/4;
    if(n%4==0)
    {
        printf("%d",m);
    }
    else
    {
        m=m+1;
        printf("%d",m);
    }
    
}