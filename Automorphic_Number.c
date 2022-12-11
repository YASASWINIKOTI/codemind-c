#include<stdio.h>
#include<math.h>
int main()
    {
        int n,s,k,e,d,m=0,r;
        scanf("%d",&n);
        s=n*n;
        k=n;
        while(n!=0)
        {
            r=n%10;
            m++;
            n=n/10;
        }
        e= (int) pow(10,m);
        d=s%e;
        if(d==k)
        {
            printf("Automorphic Number");
        }
        else
        {
            printf("Not an Automorphic Number");
        }
    }