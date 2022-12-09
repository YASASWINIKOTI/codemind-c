#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t; 
    scanf("%f%f%f",&p,&r,&t); 
    float ci; 
    ci=p*pow((1+(r/100.0)),t)-p;
    printf("%0.2f",ci);
    
}