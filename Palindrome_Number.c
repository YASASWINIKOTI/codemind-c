#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int t,j,r,s=0,k;
        scanf("%d",&t);
        k=t;
        while(t!=0)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(k==s)
        {
           printf("True
"); 
        }
        else
        {
            printf("False
");
        }
    }
}