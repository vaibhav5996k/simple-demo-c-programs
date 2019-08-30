#include<stdio.h>

int main(){
     int v;
    float am;
    printf("Enter electricity unit\n");
    scanf("%d",&v);
 if(v>0)
    {
        if (v>=1 && v<=50)
        {
            am=v*0.50;
        }

        if (v>=51 && v<=150)
        {
            am=v*0.75;
        }
        
        if (v>=151 && v<=250)
        {
            am=v*1.20;
        }
        
        if (v>=250)
        {
            am=v*1.50;
        }

   
    float percent =((20*am)/100);
    float total=am+percent;

    printf("Total amount is%f\n",am);
    printf("20 percent on your amount is%f\n",percent);
    printf("total you have to pay %f\n",total);
}
      else
    {
        printf("\nInvalid input.");
    }
    
    
    return 0;
}