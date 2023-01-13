#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,j,s=0,r;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            r=j%10;
            if(r==2 || r==3 || r==9)
            {
                s++;
            }
        }
        printf("%d
",s);
        
    }
}