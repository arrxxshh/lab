#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    // char str2[strlen(str1)];
    // for (int i = 0; i < strlen(str1); i++)
    // {
    //     str2[i]=str1[i];
    // }
    
    // printf("%s",str2);



    char str[]="University";
    // for (int i = 1; i < strlen(str); i+=2)
    // {
    //     for (int j = 0; j<=i; j++)
    //     {
    //         printf("%c ",str[j]);
    //     }
    //     printf("\n");
        
    // }
    // for (int i = strlen(str)-3; i >=0 ; i-=2)
    // {
    //     for (int j = 0; j<=i; j++)
    //     {
    //         printf("%c ",str[j]);
    //     }
    //     printf("\n");
        
    // }

//  printf("%s",strcat(str1,str));
//  (strcmp(str1,str))?
//  printf("\nnot equal"):printf("\nequal");

 char vowel[]="AEIOU";
 char vowel2[]="aeiou";

 int v=0;
 
 for(int i=0;i<strlen(str);i++){
    for(int j=0;j<5;j++){
         if(  str[i]==vowel[j] || str[i]==vowel2[j]  )
        {
            printf("%c",str[i]);
             v++;
        }
    }
   

 }
 printf("\n%d",v);
    
    
    return 0;
}
