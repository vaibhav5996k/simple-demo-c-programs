#include<stdio.h>
int main()
{
	int a,b,c,l=1,rows;
	
	printf("Enter number of rows\t");
	scanf("%d",&rows);
	
	for(a=1; a<=rows; a++)
	{
		for(b=10; b>=a; b--)
		{
			printf(" ");
		}

		for(c=1; c<=l; c++)
		{ 
			printf("*");
		}            
		l = l+2;    
		printf("\n");
	}
	
	return 0;
}
