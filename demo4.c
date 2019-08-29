#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter mark of subject math\n");
    scanf("%d",&a);
    printf("Enter mark of subject science\n");
    scanf("%d",&b);
    printf("Enter mark of subject english\n");
    scanf("%d",&c);
    printf("Enter mark of subject history\n");
    scanf("%d",&d);
    printf("Enter mark of subject physics\n");
    scanf("%d",&e);
    int l=(a+b+c+d+e)/5;
        printf("Total persents are:%d\n",l);

    if (l>=90&&l<=100)
    {
        printf("Congrates Grade is A\n");
    }

     if (l>=80&&l<=89)
    {
        printf("Congrates Grade is B\n");
    }

     if (l>=70&&l<=79)
    {
        printf("Congrates Grade is C\n");
    }

     if (l>=60&&l<=69)
    {
        printf("Congrates Grade is D\n");
    }

     if (l>=35&&l<=59)
    {
        printf("Congrates Grade is E\n");
    }
    if (l<=34)
    {
        printf("your are fail\n");
    }
    if (l>=101)
    {
        printf("Invalid marks entered\n");
    }
    

    return 0;
}