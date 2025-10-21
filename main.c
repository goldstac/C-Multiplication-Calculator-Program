#include <stdio.h>
int main() {
    int first_number;
    int second_number;
    printf("Enter First Number\n");
    scanf("%d",&first_number);
    printf("Enter Second Number\n");
    scanf("%d",&second_number);
    int calculate = first_number * second_number;
    printf("Total Is %d",calculate);
    return 0;
}
