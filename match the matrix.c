#include<stdio.h>
int main()
{
    int row,col;
    int matrix1[3][3],matrix2[3][3];
    printf("Matrix A:\n");

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&matrix1[row][col]);
        }
    }
    printf("Matrix B:\n");

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&matrix2[row][col]);
        }
    }

    int check = 1;


    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
           if (matrix1[row][col] != matrix2[row][col])
           {
               check = 0;
               break;
           }
        }
    }
    if (check)
    {
        printf("The matrix are same");
    }
    else
        {
            printf("The matrix are not same");
        }
    return 0;
}
