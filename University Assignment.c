*Question.*
Write a c program for find the section & classroom by giving the id number 
IDs 1 to 100 are in section A.
ID 1 to 20 is room number 101
ID 21 to 40 is room number 102
ID 41 to 60 is room number 103 
ID 61 to 80 is room number 104
ID 81 to 100 is room number 105

IDs 101 to 200 are in section B.
ID 101 to 120 is room number 201
ID 121 to 140 is room number 202
ID 141 to 160 is room number 203
ID 161 to 180 is room number 204
ID 181 to 200 is room number 205

IDs 201 to 300 are in section C.
ID 201to 220 is room number 301
ID 221 to 240 is room number 302
ID 241 to 260 is room number 303
ID 261 to 280 is room number 304
ID 281 to 300 is room number 305
 

Sample output 
Enter the ID number : 10
Section : A
Classroom : 101


*source code*
  
    #include <stdio.h>
    int main(){
    int id;
    printf("Enter the id number: ");
    scanf("%d",&id);
    
    if (id >= 1 && id <= 100) {
        printf("Section: A\n");
        if (id <= 20) {
            printf("Classroom: 101\n");
        } else if (id <= 40) {
            printf("Classroom: 102\n");
        } else if (id <= 60) {
            printf("Classroom: 103\n");
        } else if (id <= 80) {
            printf("Classroom: 104\n");
        } else {
            printf("Classroom: 105\n");
        }
    } else if (id >= 101 && id <= 200) {
        printf("Section: B\n");
        if (id <= 120) {
            printf("Classroom: 201\n");
        } else if (id <= 140) {
            printf("Classroom: 202\n");
        } else if (id <= 160) {
            printf("Classroom: 203\n");
        } else if (id <= 180) {
            printf("Classroom: 204\n");
        } else {
            printf("Classroom: 205\n");
        }
    } else if (id >= 201 && id <= 300) {
        printf("Section: C\n");
        if (id <= 220) {
            printf("Classroom: 301\n");
        } else if (id <= 240) {
            printf("Classroom: 302\n");
        } else if (id <= 260) {
            printf("Classroom: 303\n");
        } else if (id <= 280) {
            printf("Classroom: 304\n");
        } else {
            printf("Classroom: 305\n");
        }
    } else {
        printf("Invalid ID number\n");
    }

    return 0;
    }



