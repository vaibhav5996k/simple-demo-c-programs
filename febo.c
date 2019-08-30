#include<stdio.h>

//0 1 1 2 3 5 8 13 21

int main()

{
    int c=0,d=1,temp,n;

    printf("Enter highest no :");
    scanf("%d",&n);

    for (int i = 1; c <=n; i++)
    {
        printf("%d ",c);
        temp=c+d;
        c=d;
        d=temp;
        

    }
    
    
}