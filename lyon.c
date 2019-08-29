#include<stdio.h>

int main(){
    int k;
    printf("Enter the year:\n");
    scanf("%d",&k);
    if (k%4==0)
    {
    if (k%100==0)
    {
        if (k%400==0)
        {
            printf("The year is leap year\n%d",k);  
        }
        else
        {
            printf("The year is not leap year\n%d",k);
        }
                
    }
   else
   {
      printf("The year is leap year\n%d",k); 
   }
    }
    else
    {
        printf("The year is not leap year\n%d",k);
    }
       

    
    return 0;
}