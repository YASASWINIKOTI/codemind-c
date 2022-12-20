#include<stdio.h>
int main()
{
    int l,r,k,i,sum=0;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}