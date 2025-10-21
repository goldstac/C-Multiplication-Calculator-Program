# A Multiplication Program Built in C

### Description
This is a simple C program that takes two numbers as input from the user and calculates their multiplication. It's a beginner-friendly project for practicing basic C programming concepts like input/output and arithmetic operations.

### How It Works
1. The program asks the user to enter the first number.
2. The user inputs the number.
3. The program asks for the second number.
4. The user inputs the second number.
5. The program calculates the product of the two numbers and displays the result.

### Code
```c
#include <stdio.h>

int main() {
    int first_number;
    int second_number;
    
    printf("Enter First Number\n");
    scanf("%d", &first_number);
    
    printf("Enter Second Number\n");
    scanf("%d", &second_number);
    
    int calculate = first_number * second_number;
    printf("Total Is %d", calculate);
    
    return 0;
}
