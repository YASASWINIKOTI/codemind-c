#include<stdio.h>
int main()
{
    int x,y,i,hcf;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x || i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
}