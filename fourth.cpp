#include<stdio.h>
int main(){
    int count=0;
    //using a while loop structure
    while(count<150){
        printf("The value of count is %d \n", count);
        count++;
        if (count==75)
        {
            break;//exit the loop when count exceeds 75
        }
        
    }
    return 0;
}