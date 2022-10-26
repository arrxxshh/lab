#include<stdio.h>
#include<math.h>
int main()
{
//calc
    /*    int a,b;
    char c;
    
    
    scanf("%d%d %c",&a,&b,&c);
    
    
    switch(c)
    {
    case '+' :
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
     case '%':
        printf("%d",a%b);
        break;
    }*/
//month switch
    /* int mnth;
scanf("%d",&mnth);
switch (mnth)
{
case 1:
    printf("january");
    break;
case 2:
    printf("february");
    break;
case 3:
    printf("march");
    break;
case 4:
    printf("april");
    break;
 case 5:
    printf("may");
    break;
case 6:
    printf("june");
    break;
case 7:
    printf("july");
    break;
case 8:
    printf("august");
    break;
case 9:
    printf("september");
    break;
case 10:
    printf("october");
    break;
case 11:
    printf("november");
    break;
case 12:
    printf("december");
    break;*/
//div by 5& 8
    /* int a;
scanf("%d",&a);
(a%5==0 && a%8==0) ? printf("divisible ny both") : (a%5==0) ? printf("div by 5") : (a%8==0) ? printf("div by 8") : printf("neithr");*/
//lib mngment
    /*int ovrd,mbrshp=1;
    float fine=0;
    scanf("%d",&ovrd);
    if (ovrd>=5)
    {
     fine=0.5;
        if (ovrd<=10) 
           fine=1;
        else{
            fine = 5;
                if (ovrd>=30) 
                    mbrshp=0;
                    fine=5;
            }

    }
     printf(" days overdue is %d with fine of  %f*%d=%f",ovrd,fine,ovrd,fine*ovrd);
    (mbrshp==0)? printf(" and your membership stands cancelled") : printf(" and membership stil valid");
    */
//steel grades
    /* int h,t,g;
    float c;
    printf("enter values of hardness, carbon content and tensile strength: \n");
    scanf("%d%f%d",&h,&c,&t);
    h= h>=50;
    c= c<0.7;
    t= t>=5600;
    g= h+c+t;
    if (g==3)
    {
        g=10;
    }
    else if (g==2)
    {
        if(h+c==2)
        g=9;
        else if (c+t==2)
        g=8;
        else if (t+h==2)
        g=7;
    }
    else if(g==1)
    {
        g=6;
    }
    else
    {
        g=5;
    }
    printf("grade of your given steel is %d",g);
*/
    
    
}
