#include<stdio.h>
void prime(int n){
     int k =1;
     int p=1;
    for(int i=2;k<=n;i++){
        p=1;
        for (int  j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                p=0;
            }
            
        }
        if(p==1){
            printf("%d\n",i);
            k++;
        }
        
    }
}
int swap(int a, int b){
    int c,d[] ;
     c =a+b;
     a=c-a;
     b=c-b;
     
// }
// int factorial(int a) {
//     int a,b,i;
//     b=1;
//     scanf("%d",&a);
//     for ( i = 0; i < a; i++)
//     {
//         printf("%d*",a-i);
//         b=b*(a-i);
        
//     }
//     return b; 
    
// }
main()
{
    int l;
    scanf("%d",&l);
    prime(l);
}