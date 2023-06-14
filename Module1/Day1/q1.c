/* 
1. Write a function in C  to find biggest of 2 numbers using 
    - if else
    - ternary operator
*/ 

#include <stdio.h>

int findMaxUsingIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findMaxUsingTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int input1 = 17;
    int input2 = 26;
    
    int maximum = findMaxUsingIfElse(input1, input2);
    printf("The maximum number using if else is: %d\n", maximum);
    
    maximum = findMaxUsingTernary(input1, input2);
    printf("The maximum number using the ternary operator is: %d\n", maximum);
    
    return 0;
}
