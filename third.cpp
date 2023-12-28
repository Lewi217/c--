#include<stdio.h>
//variable declaration
int main(){
    double num1;
    double num2;
    char op;
    //enter first number
    printf("Enter first number:");
    scanf("%lf", &num1);
    //enter operator
    printf("Enter operator:");
    scanf("%s", &op);
    //enter second number
    printf("Enter second number:");
    scanf("%lf",&num2);

    //state the conditions
    if(op=='+'){
        printf("%lf", num1+num2);
    }else if(op=='-'){
        printf("%lf",num1-num2);
    }else if(op=='*'){
        printf("%lf", num1*num2);
    }else if(op=='/'){
        printf("%lf", num1/num2);
    }else{
        printf("Invalid operator:");
    }
    return 0;
    }