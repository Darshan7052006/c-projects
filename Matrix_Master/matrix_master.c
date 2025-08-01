#include <stdio.h>

int main()
{
    int option;
    int i, j, n;
    int row, column;
    printf("-------------------\n");
    printf("---MATRIX MASTER---\n");
    printf("-------MENU-------\n");
    printf("1) TRANSPOSE OF MATRIX\n");
    printf("2) DETERMINANT OF MATRIX\n");
    printf("3) INVERSE OF MATRIX\n");
    printf("4) ADDITION OF MATRIX\n");
    printf("5) SUBTRACTION OF MATRIX\n");
    printf("6) MULTIPLICATION OF MATRIX\n");
    printf("Choose an operation from above\n");
    scanf("%d", &option);
    if (option>=1 && option<=3)
    {
        printf("Input the matrix for which you have to find the transpose");
        printf("Enter the number of rows: ");
        scanf("%d", &row);
        printf("Enter the number of columns: ");
        scanf("%d", &column);
        int x[row][column];
        printf("---------\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("Enter the element of Matrix for row %d and column %d: ", i, j);
                scanf("%d", &x[i][j]);
            }
        }
        printf("The elements of matrix are: \n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("%4d", x[i][j]);
                printf("\t");
            }
            printf("\n\n");
        }
        if (option == 1)
        {
            printf("-------TRANSPOSE OF MATRIX-------");
            printf("\n\n");
            printf("----CHANGING ROWS TO COLUMNS AND VICE-VERSA----\n");
            for (j = 0; j < column; j++)
            {
                for (i = 0; i < row; i++)
                {
                    printf("%4d", x[i][j]);
                    printf("\t");
                }
                printf("\n\n");
            }
        }
        if(option == 2){
            printf("--------DETERMINANT OF MATRIX--------");
        }
        return 0;
    }
    if (option > 3 && option <= 6)
    { // We will declare two matrices again and take input form user for the elements of both the matrices.
        // After that we will again use if else to specify the operation we want to perform according to the option chosen by the user.
        int rowA, rowB, columnA, columnB;
        printf("Enter the number of rows for Matrix A: ");
        scanf("%d", &rowA);
        printf("Enter the number of columns: ");
        scanf("%d", &columnA);
        int x[rowA][columnA];
        printf("---------\n");
        for (i = 0; i < rowA; i++)
        {
            for (j = 0; j < columnA; j++)
            {
                printf("Enter the element of Matrix for row %d and column %d: ", i, j);
                scanf("%d", &x[i][j]);
            }
        }
        printf("The elements of matrix are: \n");
        for (i = 0; i < rowA; i++)
        {
            for (j = 0; j < columnA; j++)
            {
                printf("%4d", x[i][j]);
                printf("\t");
            }
            printf("\n\n");
        }
        printf("Enter the number of rows in matrix B: ");
        scanf("%d", &rowB);
        printf("Enter the number of columns in Matrix B: ");
        scanf("%d", &columnB);
        int y[rowB][columnB];
        printf("---------\n");
        for (i = 0; i < rowB; i++)
        {
            for (j = 0; j < columnB; j++)
            {
                printf("Enter the element of Matrix for row %d and column %d: ", i, j);
                scanf("%d", &y[i][j]);
            }
        }
        printf("The elements of matrix are: \n");
        for (i = 0; i < rowB; i++)
        {
            for (j = 0; j < columnB; j++)
            {
                printf("%4d", y[i][j]);
                printf("\t");
            }
            printf("\n\n");
        }
        if (rowA == rowB && columnA == columnB)
        {
            if (option == 4)
            {
                printf("You have opted for doing addition of the matrices given by him.\n");
            }
            if (option == 5)
            {
                printf("You have opted for doing subtraction of the matrices given by him.\n");
            }
        }
        if (option == 6 && columnA == rowB)
        {
            printf("You have opted for multiplication.\n");
        }
    }
    else
    {
        printf("User has chosen Invalid option.\n");
    }
    return 0;
}