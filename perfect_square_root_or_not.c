#include<stdio.h>
int main()
{
    int n,i,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            y=i;
        }
    }
    if(y*y==n) printf("True");
    else printf("False");
}