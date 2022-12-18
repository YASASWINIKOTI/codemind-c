#include<stdio.h>
int main()
{
    int u;
    float am,ch;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<199)
    {
        printf("Cost per Unit: 1.20
");
        am=u*1.20;
        printf("Bill: %0.2f
",am);
    }
    else if(u>=200 && u<400)
    {
        printf("Cost per Unit: 1.40
");
        am=u*1.40;
        printf("Bill: %0.2f
",am);
    }
    else if(u>=400 && u<600)
    {
        printf("Cost per Unit: 1.60
");
        am=u*1.60;
        printf("Bill: %0.2f
",am);
    }
    else if(u>=600 && u<800)
    {
        printf("Cost per Unit: 1.80
");
        am=u*1.80;
        printf("Bill: %0.2f
",am);
    }
    else if(u>=800)
    {
        printf("Cost per Unit: 2.00
");
        am=u*2.00;
        printf("Bill: %0.2f
",am);
    }
    ch=am*0.15;
    
    if(am>400)
    {
        printf("Surcharge: %0.2f
",ch);
        am=am+ch;
    }
    else if(am<400)
    {
        printf("Surcharge: 0.00
");
    }
    printf("Total Amount: %0.2f
",am);
}