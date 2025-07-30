#include <stdio.h>
#include <math.h>


const int MAX = 20; //Here we have declared max as a global integral constant with value of 20 and it can be accessed even outside the main() function.
int main()

{
    float first[MAX], second[MAX];
    int count = 0;
    float temp;
    printf("Enter maximum %d numbers,terminate if 0.0\n", MAX);
    printf("Enter first number: ");
    scanf("%f", &temp);
    while (count < MAX && temp != 0)
    {
        first[count++] = temp;
        printf("Next number: ");
        scanf("%f", &temp);
    }
    printf("\n\n");
    printf("You have enterred %d numbers.\n", count);
    int index;
    for (index = 0; index < count; ++index)
    {
        if (index % 2 == 0)
        {
            second[index] = 2 * first[index];
        }
        else
        {
            second[index] = cbrt(first[index]);
        }
    }
    printf("%12s %12s\n\n", "INPUT ARRAY", "SECOND ARRAY"); //Here 's' is a format specifier for string.We have used it to print two strings side by side.
    float firstsum = 0.0, secondsum = 0.0;
    for (index = 0; index < count; ++index)
    {
        printf("%12.5f %12.5f\n\n", first[index], second[index]);
        firstsum += first[index];
        secondsum += second[index];
    }
    printf("\n\n");
    printf("The sum of first array is %f", firstsum);
    printf("The sum of second array is %f", secondsum);

    return 0;
}