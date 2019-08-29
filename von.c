#include<stdio.h>

int main(){
   char b;
   int c,l;
   printf("Enter your alphabet:\n");
    scanf("%c",&b);
    c=(b=='A'||b=='E'||b=='I'||b=='O'||b=='U');
    l=(b=='a'||b=='e'||b=='i'||b=='o'||b=='u');
    
    if (c||l)
    {
        printf("%c Alphabet is vowel:/n ",b);
    }
    else
    {
        printf("%c Alphabet is consonant:/n",b);
    }
    
    


    return 0;
}