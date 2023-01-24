#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,r;
        scanf("%d",&a);
        r=sqrt(a);
        if(r*r==a){
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