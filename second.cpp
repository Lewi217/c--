#include<stdio.h>
int main{
    int my_array[6];
    //initialize the arrays

    my_array[0] = 1;
    my_array[1] = 2;
    my_array[2] = 3;
    my_array[3] = 4;
    my_array[4] = 5;
    my_array[5] = 6;


    for(int i=0; i<6; i++){
        printf("%d",my_array[i]);
    }
        return 0;
}
