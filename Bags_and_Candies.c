#include<stdio.h>
int main()
{
    int n,k,m,b=0,x;
    scanf("%d%d%d",&n,&k,&m);
    x=n/(m*k);
    if(n%(m*k)==0)
    {
        
       printf("%d",x);
    }
    else
    {
        x=x+1;
        printf("%d",x);
    }
}
