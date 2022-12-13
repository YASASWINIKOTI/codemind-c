#include<stdio.h>
int main()
{
    int x,y; 
    scanf("%d%d",&x,&y); 
    int s; s=x+y;
    printf("Sum:%d
",s);
    int d; d=x-y;
    printf("Difference:%d
",d);
    int p; p=x*y;
    printf("Product:%d
",p);
    int q; q=x/y; 
    printf("Quotient:%d
",q);
    int r; r=x%y; 
    printf("Remainder:%d",r);
    
}