#include<stdio.h>
void add(){
    int m1,m2,n1,n2;
    //rows and columns of arr1
    printf("enetr order of matrix 1\n");
    scanf("%d%d",&m1,&n1);
    //rows and columns of arr2
    printf("enter order of matrix 2\n");
    scanf("%d%d",&m2,&n2);
    int arr1[m1][n1],arr2[m2][n2];
    int add[m1][n1];
    for(int i=0;i<m1;i++){
        for (int j = 0; j < n1; j++)
        {
            add[i][j]=0;
        }
        
    }

   
         printf("array 1\n");

     for(int i=0;i<m1;i++){
        for (int j = 0; j < n1; j++)
        {
            
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("array 2\n");
     for(int i=0;i<m2;i++){
        for (int j = 0; j < n2; j++)
        {
            
            scanf("%d",&arr2[i][j]);
        }
    }

        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                add[i][j]=arr1[i][j]+arr2[i][j];
                printf("%d\t",add[i][j]);
            }
            printf("\n");
            
        }
}
void mul()
{
     int m,k,n;
    //rows and columns of arr1
    printf("enetr order of matrix 1\n");
    scanf("%d%d",&m,&k);
    //rows and columns of arr2
    printf("enter order of matrix 2\n");
    scanf("%d%d",&k,&n);
    int arr1[m][k],arr2[k][n];
    int mul[m][n];
    //arr1 init
    printf("array 1\n");
     for(int i=0;i<m;i++){
        for (int j = 0; j < k; j++)
        {
            
            scanf("%d",&arr1[i][j]);
        }
    }
    
    //arr2 init
    printf("array 2\n");
     for(int i=0;i<k;i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    //mul init
     for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++)
        {
            mul[i][j]=0;
        }
        
    }

    //mul
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
            for (int p = 0; p < k; p++)
            {
                mul[i][j]+=arr1[i][p]*arr2[p][j];
                
            }
            printf("%d\t",mul[i][j]);
       }
      printf("\n"); 
    }

}
void transpose(){
    int m,n;
    printf("order of matrix:");
    scanf("%d%d",&m , &n);
    int arr1[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&arr1[i][j]);

    printf("\n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",arr1[j][i]);
    }
    
    printf("\n");
    }
    
}
void max_min(){
int n;
   printf("enter number of elements in array");
   scanf("%d",&n);
   int arr1[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
  
   int max=arr1[0],min=arr1[0];
   for (int i = 0; i < n; i++)
   {
     if(max<arr1[i])
     max=arr1[i];
     if(min>arr1[i])
     min=arr1[i];
   }
   printf("max is %d and min is %d",max,min);
}
void sum_avg(){
    int n;
    printf("enter number of elements in array");
   scanf("%d",&n);
   int arr1[n],sum=0;
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
    sum+=arr1[i];
   }
   printf("sum of elements is %d and average is %.2f",sum,(float)sum/n);

}
void linear_search(){
 int m1,n1;
    //rows and columns of arr1
    printf("enetr order of matrix 1\n");
    scanf("%d%d",&m1,&n1);
      printf("array 1\n");
    int arr1[m1][n1];
     for(int i=0;i<m1;i++){
        for (int j = 0; j < n1; j++)
        {
            
            scanf("%d",&arr1[i][j]);
        }
    }
    int item;
    printf("enetr the item to be searched");
    scanf("%d",&item);
     for(int i=0;i<m1;i++){
        for (int j = 0; j < n1; j++)
        {
            if (arr1[i][j]==item)
            {printf("element found at index %d,%d",i,j);break;}
            
            
        }
    }
}
void array_reversal(){
    int n;
   printf("enter number of elements in array");
   scanf("%d",&n);
   int arr1[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
   int arr2[n];
  for (int i = 1; i <= n; i++)
  {
    arr2[n-i]=arr1[i-1];
  }
   for(int i=0;i<n;i++){
    printf("%d\t",arr2[i]);
   }
}
void copy(){
    int n;
   printf("enter number of elements in array    ");
   scanf("%d",&n);
   int arr1[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
   int arr2[n];
  for (int i = 0; i < n; i++)
  {
    arr2[i]=arr1[i];
    printf("%d\t",arr2[i]);
  }
}
void insert_element(){
    int n;
   printf("enter number of elements in array    ");
   scanf("%d",&n);
   int arr1[10];
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
   int index,value;
   printf("enter the index and value: ");
   scanf("%d%d",&index,&value);
   
   
    for (int i = n; i >index; i--)
   {
        arr1[i]=arr1[i-1];
   }
   
   arr1[index]=value;
   for (int i = 0; i <= n; i++)
   {
        printf("%d",arr1[i]);
   }

}
void delete_element(){
    int n;
   printf("enter number of elements in array    ");
   scanf("%d",&n);
   int arr1[10];
   for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
   int index,value;
   printf("enter element to be searched: ");
   scanf("%d",&value);
   for(int i=0;i<n;i++){
    if (arr1[i]==value){
        index=i;
        break;
    }
   }

   if(index){
    for(int i=index;i<n;i++){arr1[i]=arr1[i+1];}
    n--;
    
    for(int i=0;i<n;++i){
        printf("%d",arr1[i]);
    }
   }
   else{printf("element not found");}
}
int main()
{
   //array_reversal
   //array_reversal();
  
   //insert element at index
   //insert_element();

   //copy array
   //copy();
   
   //delete given element
   //delete_element();
   
   //linear search
   //linear_search();
    
   //sum and average
    //sum_avg();
 
 //largest and smallest
   //max_min();
  
   /*//to add , transpose and multiply matrix
    add();
    transpose();
    mul();
    */
    
}


