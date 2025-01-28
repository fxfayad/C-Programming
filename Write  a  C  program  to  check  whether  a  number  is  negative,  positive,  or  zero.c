#include<stdio.h>
int main()
{
    double number;

    printf("Enter the number: ");
    scanf("%lf", &number);

    if (number > 0){
        printf("%.2f is a positive number.\n", number);
    } else if (number < 0){
        printf("%.2f is a negative number.\n", number);
    } else {
    printf("The number is zero.\n");
    }
return 0;
}
