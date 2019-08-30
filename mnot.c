#include<stdio.h>

int main(){
    int v,j,k;
    printf("Enter number:\n");
    scanf("%d",&v);

    for (j=1; j <= 10; j++)
    {
        k=v*j;
        printf("%d\n",k);
    }
    
 
 
 
    return 0;
}