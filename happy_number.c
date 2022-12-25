#include<stdio.h>
int hap(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
    }
    return(s);
}
int hap(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int res=n;
    while(res!=1 && res!=4)
    {
        res=hap(res);
    }
    if(res==1) printf("True");
    else printf("False");
}