#include<stdio.h>

int main()

{
    int a,b,c;
        printf("Enter 1st no:\n");
    scanf("%d",&a);
        printf("Enter 2nd no:\n");
    scanf("%d",&b);
        printf("Enter 3rd no:\n");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("The 1st no is gretest among three:\n%d",a);
        }
        else
        {
             printf("The 3rd no is gretest among three:\n%d",c);
        }
    }
    else
    {
        if (b>c)
        {
                printf("The 2nd no is gretest among three:\n%d",b);
        }
           else
           {
                printf("The 3rd no is gretest among three:\n%d",c);
           }
           
        
    }
        
      
    return 0;
}









