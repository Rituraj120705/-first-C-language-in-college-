#include<stdio.h>
int main() {
     char ch;

     printf("enter the character\n");
     scanf("%c",&ch);
    //ascii table for lower case is 97 to 122.
    if(ch>=97 && ch<=122){
        printf("it is lower case");
    }

    else{
        printf("it is not a lower case");
    }

     return 0;
}