//C program takes a single character as input
//and determines whether it is a digit or an alphabetic character (uppercase or lowercase).

#include <stdio.h>

int main() {
    char X;
    printf("ENTER YOUR INPUT: ");
    scanf("%c", &X);


    if (X >= '0' && X <= '9') {
        printf("IS DIGIT\n");
    }

    else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) {
        printf("ALPHA\n");

        if (X >= 'A' && X <= 'Z') {
            printf("IS CAPITAL\n");
        }

        else {
            printf("IS SMALL\n");
        }
    }

    return 0;
}

