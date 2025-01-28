#include <stdio.h>

int main() {
    int num1, num2;


    printf("Enter numbers 1: ");
    scanf("%d" , &num1);

    printf("Enter numbers 2: ");
    scanf("%d" , &num2);


    if (num1 > num2) {
        printf("%d is the maximum number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the maximum number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
