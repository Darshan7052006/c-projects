#include <stdio.h>

int main()
{
    int n;
    printf("Enter the dimension of magic square(number greater than 15 and less than 1 terminated): ");
    scanf("%d", &n);
    if (n < 1 || n > 15 || n % 2 == 0)
    {
        printf("Error detected and program terminated.\n");
        printf("Values should be between 0 and 15 and only odd.\n");
        return 0;
    }
    int row, column;
    int magic[n][n];
    for (row = 0; row < n; ++row)
    {
        for (column = 0; column < n; ++column)
        {
            magic[row][column] = 0;
        }
    }
    row = n - 1;
    column = n / 2;
    int k;
    for (k = 1; k <= n * n; ++k)
    {

        magic[row][column] = k;

        int oldRow = row;
        int oldColumn = column;

        row = (row + 1) % n;

        column = (column + 1) % n;
        if (magic[row][column] != 0)
        {
            column = oldColumn;
            row = oldRow;
            row--;
        }

    } // end of for loop

    int magicConstant = n * (n * n + 1) / 2;

    // Now we need to display the magic square
    // while displaying we will check the sum of each row
    printf("The magic square: \n\n");
    int correct = 1; // assuming that it is correct magic square
    for (row = 0; row < n; ++row)
    {
        int rowSum = 0;
        for (column = 0; column < n; ++column)
        {
            printf("%4d", magic[row][column]);
            rowSum += magic[row][column];
        }
        printf("\n");
        if (rowSum != magicConstant)
        {
            correct = 0;
        }
    }

    for (column = 0; column < n; ++column)
    {
        int colSum = 0;
        for (row = 0; row < n; ++row)
        {
            colSum += magic[row][column];
        }
        if (colSum != magicConstant)
        {
            correct = 0;
        }
    }

    int firstDiaSum = 0;
    for (row = 0, column = 0; row < n; ++row, ++column)
    {
        firstDiaSum += magic[row][column];
    }
    if (firstDiaSum != magicConstant)
    {
        correct = 0;
    }

    int secondDiaSum = 0;
    for (row = 0, column = n - 1; row < n; ++row, --column)
    {
        secondDiaSum += magic[row][column];
    }
    if (secondDiaSum != magicConstant)
    {
        correct = 0;
    }

    if (correct)
    {
        printf("Magic square generated with dimension %d and magic constant: %d\n", n, magicConstant);
    }
    else
    {
        printf("Error in forming magic square with dimension %d\n", n);
    }
    return 0;
}