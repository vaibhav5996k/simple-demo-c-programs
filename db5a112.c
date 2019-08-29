#include<stdio.h>

int main()
{  
  int k;
  printf("Enter the no.\n");
  scanf("%d",&k);

  if (k % 5 <=0)
  {
      if(k%11<=0)
      {
            printf("Your no is devisible by 5 and 11 \n%d",k);
      }
      else
      {
          printf("your no is divisible by 5\n%d",k);
      }
      
  }
  else
  {
      printf("your no is not devisible by 5 and 11\n%d",k);
  }
  
  return 0;
}