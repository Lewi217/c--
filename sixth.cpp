#include<stdio.h>
int main(){
    /*classify the grade according to the performance*/
    char grade='F';
    switch(grade){
         case 'A':
         printf("You did great!");
         break;
         case 'B':
        printf("You did well!");
         break;
        case 'C':
         printf("You did good!");
         break;
         case 'D':
         printf("You did poorly!");
         break;
         case 'E':
         printf("You failed!");
         break;
         case 'F':
         printf("You are discontinued!");
         break; 
    }
   return 0;

}