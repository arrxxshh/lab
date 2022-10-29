#include<stdio.h>
#include<math.h>
int main()
{
    //sizeof()
    int a;
    float b;
    char c;
    long int d;
    long long e;
    printf("%d",sizeof(a));
    printf("%d",sizeof(b));
    printf("%d",sizeof(c));
    printf("%d",sizeof(d));
    printf("%d",sizeof(e));
    //divide and type cast
    int a=4,b=5;
    printf("%f",(float)a/b);
    //typecast

    //leap yr check
    int yr;
    scanf("%d",&yr);
     (yr%4==0 && yr%100!=0 \\ yr%400==0)
    ? printf("%d is a leap yr",yr)
    :  printf("not leap");
    
    
    //ascii chck
    int a;
    char b = (char)a;
    (a>=65 && a<= 90)?printf("Uppercase"):(a<=97 && a>=122)?print("lowercase"):(a>=80 && a<=89)?printf("numbers"):printf("special char");

    //greatest of three if else
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && b<c)
    printf("%d is greatest",a);
    else if(a<b && a<c)
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);
    
    //greatest of three ternary
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b && b<c)
    ? printf("%d is greatest",a): (a<b && a<c) ? printf("%d is greatest",b) :  printf("%d is greatest",c);

    //evn odd if else
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    if (number & 1) 
    printf("odd");
    else
    printf("even");

    //evn odd ternary
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    (number & 1)
    ?  printf("odd")
    :  printf("even");

    //-ve +ve if else
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    if (number >=0)
    printf("positive");
    else  printf("negative");


    //-ve +ve ternary
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    (number >=0)
    ?  printf("positive")
    :  printf("negative");
}
