#include<stdio.h>
int main()
{ 
    int s,t,b,cp;
    scanf("%d%d%d",&s,&t,&b);
    cp=2*s*t*b*512;
    int tot; tot=cp/1024; 
    printf("%dkb",tot);
    
}