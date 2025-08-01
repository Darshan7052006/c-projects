#include <stdio.h>

int main()
{
    int option;
    int i, j, n;
    char response;
    int row, column;
    do
    {
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
        if (option >= 1 && option <= 3)
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
            if (option == 2)
            {
                if (row == column)
                {
                    int Determinant;
                    printf("--------DETERMINANT OF MATRIX--------");
                    printf("\n\n");
                    if (row == 1 && column == 1)
                    {
                        Determinant = x[0][0];
                        printf("The determinant is: %d.\n", Determinant);
                    }
                    else if (row == 2 && column == 2)
                    {
                        Determinant = x[0][0] * x[1][1] - x[0][1] * x[1][0];
                        printf("The determinant of the matrix is: %d\n", Determinant);
                    }
                    else if (row == 3 && column == 3)
                    {
                        Determinant = x[0][0] * (x[1][1] * x[2][2] - x[1][2] * x[2][1]) - x[0][1] * (x[1][0] * x[2][2] - x[1][2] * x[2][0]) + x[0][2] * (x[1][0] * x[2][1] - x[1][1] * x[2][0]);
                        printf("The determinant is: %d\n", Determinant);
                    }
                    else if (row >= 4 && column >= 4)
                    {
                        printf("The Matrix is too big for the program.\n");
                    }
                }
                else if (row != column)
                {
                    printf("Determinant does not exist as the matrix given is not a square matrix.\n");
                }
            }
            if (option == 3)
            {
                printf("----INVERSE OF A MATRIX----");
                printf("\n\n");
                printf("I will be updating this project once i get to learn file handling properly till then we have to wait.\n");
            }
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
                    int add[rowA][columnA];
                    printf("You have opted for doing addition of the matrices.\n");
                    for (i = 0; i < rowA; i++)
                    {
                        for (j = 0; j < columnA; j++)
                        {
                            add[i][j] = x[i][j] + y[i][j];
                            printf("The result of additon is matrix: %4d\n", add[i][j]);
                            printf("\t");
                        }
                    }
                }
                if (option == 5)
                {
                    int subt[rowA][columnA];
                    printf("You have opted for doing subtraction of the matrices.\n");
                    for (i = 0; i < rowA; i++)
                    {
                        for (j = 0; j < columnA; j++)
                        {
                            subt[i][j] = x[i][j] - y[i][j];
                            printf("The result of subtraction is matrix: %4d\n", subt[i][j]);
                            printf("\t");
                        }
                    }
                }
            }
            if (option == 6 && columnA == rowB)
            {
                int mult[rowA][columnB];

                // Initialize result matrix to 0
                for (i = 0; i < rowA; i++)
                    for (j = 0; j < columnB; j++)
                        mult[i][j] = 0;

                // Perform multiplication
                for (i = 0; i < rowA; i++)
                {
                    for (j = 0; j < columnB; j++)
                    {
                        for (int k = 0; k < columnA; k++)
                        {
                            mult[i][j] += x[i][k] * y[k][j];
                        }
                    }
                }

                printf("\nResultant Matrix (Multiplication):\n");
                for (i = 0; i < rowA; i++)
                {
                    for (j = 0; j < columnB; j++)
                    {
                        printf("%4d\t", mult[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Matrix multiplication not possible (columns of A != rows of B).\n");
            }
        }
        else if(option<1 || option>6)
        {
            printf("User has chosen Invalid option.\n");
        }
    
    printf("Do you want to continue: ");
    getchar();
    scanf(" %c", &response);
}
while (response == 'Y' || response == 'y')
    ;
return 0;
}