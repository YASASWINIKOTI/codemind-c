#include<stdio.h>
int main()
{
    int n,i,k,sum=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(k<sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}