#include<stdio.h>
#include<math.h>
int main()
{
//factorial of a loop
   /*   int a,b,i;
    b=1;
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        printf("%d*",a-i);
        b=b*(a-i);
        
    }
    printf(" = %d",b);*/
//primality
   /* int a; 
   scanf("%d",&a); 
   for (int i = 1; i < a; i++)
   {
      if (a<0)
      {
         printf("entered value is negative");
      }
      else  if (a==1 || a==0)
      {
         (a==1) ? printf("neither") : printf("you have entered 0");
      }
      else if(a%i==0 && i!=1){
         printf("composite ");
      }
      else{
         printf("prime");
      }
   }*/
//x**n
 /*  int b,e;
   scanf("%d%d",&b,&e);
   for (int i = 1; i < e; i++)
   {
      b*=b;
   }
   printf("%d",b);
*/
//armstrong numbers
   /*m1
int i, a, b, c, s;

  for (i = 1; i <= 500; i++) {
    a = i / 100;
    b = i / 10 - a * 10;
    c = i % 10;
    s = pow(a, 3) + pow(b, 3) + pow(c, 3);
    if (s == i && i != 1) {
      printf("%d is an amstrong number \n ", i);
    }
    }  */
   /*m2
  float a,n;
    float b;
    float c;
    for (a=1; a <= 500; a++)
    {
      
      b=a;
      c=0;
      while (b!=0)
      {  float m=(int)b%10;
         n= pow(m,3);
         c=c+n;
         b=b/10; 
      }
      if (c==a)
      {
         printf("%f is amstrong \n" , c);
      }
      
    }    */
//rnge of set of nos, smallest largest;
   /*  int a[5],min,max;
   scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
   min=a[0];
   max=a[0];
   for (int i = 0; i < 5; i++)
   {
      if (a[i]<min)
      {
         min=a[i];
      }
      if (a[i]>max)
      {
         max=a[i];
      }
      
      
   }
   printf(" highest is :%d & lowest is : %d",max,min);*/
//multiplication tble
   /* int a,i;
   scanf("%d",&a);
   for ( i = 0; i < 11; i++)
   {
      printf("%d * %d = %d \n",a,i,a*i);
   }
*/
//hcf lcm
   /* int i,z,y,q,w,hcf,lcm;
    scanf("%d%d",&q,&w);
    if (q>w){
      z=w;
      y=q;
    }
   else{
      z=q;
      y=w;
   }
    for ( i = 1; i <= z ; i++)
    {
         if(w%i==0 && q%i==0)
         {
            hcf=i;  
         }
     }
    for ( i = 1; i <= y; i++)
    {
      if(i%w==0 && i%q==0)
         {
            lcm=i;
            break;
         }
         else{
            lcm=w*q;
         }
    }
    
    printf("hcf is %d " , hcf);
    printf("lcm is %d " , lcm);*/


//fibonacci series
int a1,b1,c1,i1;
a1=0;
b1=1;
printf("%d %d", a1,b1);
for (i1=1;i1<5;i1++){
   
   c1=a1+b1;
   printf(" %d  ",c1);
   a1=b1;
   b1=c1;
   

}

   int a,i;
    printf(" eneter no. of terms after zero");
    scanf("%d",&a);
    int b[a];
    b[0]=0;
    b[1]=1;
    for ( i = 2; i <= a; i++)
    { 
        b[i]=b[i-1]+b[i-2];
    }
   for ( i = 0; i <= a; i++)
   {
      printf("%d ",b[i]);
   }
   

}
