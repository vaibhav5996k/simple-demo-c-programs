#include<stdio.h>

int main(){

int n;
printf("Enter the no:\n");
scanf("%d",&n);

int temp=n;
int p=0,k=0;

 while (n>0)
    {
        p=n%10;
        k=k+(p*p*p);
        n=n/10;

    }
    
    if (k==temp)
    {
        printf("The no inserted is armstrong:\n");
    }
    
else
{
    printf("The inserted no is not armstrong:\n");
}


    return 0;
}