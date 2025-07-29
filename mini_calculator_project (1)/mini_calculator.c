
#include <stdio.h>
#include <math.h> // We have to include fmod function whose declaration is contained in math.h headerr files therefore we included this header file.

int main()
{
    int option, quit = 0;
    char response;
    float number_1, number_2;
    while (!quit) {
        printf("Enter the value of number1: ");
        scanf("%f", &number_1);
        printf("Enter the value of number2: ");
        scanf("%f", &number_2);
        printf("\n---MENU---\n");
        printf("Choose which arithmatic operation you would like to perform.\n");
        printf("1)Addition.\n ");
        printf("2)Subtraction.\n ");
        printf("3)Multiplicaton. \n");
        printf("4)Division. \n");
        printf("5)Remainder. \n");
        scanf("%d", &option);
        printf("You have choosen: %d option\n", option);
        if (option == 1) {
            printf("%f + %f=%f\n", number_1, number_2, number_1 + number_2);
        }
        else if (option == 2) {
            printf("%f - %f=%f\n", number_1, number_2, number_1 - number_2);
        }
        else if (option == 3) {
            printf("%f * %f=%f\n", number_1, number_2, number_1 * number_2);
        }
        else if (option == 4) {
            if (number_2 != 0) {
                printf("%f / %f=%f\n", number_1, number_2, number_1 / number_2);
            } else {
                printf("Division by 0 is not allowed as it will give infinty.");
            }
        }
        else if (option == 5) {
            if (number_2 != 0) {
                printf("%f %% %f=%f\n", number_1, number_2, fmod(number_1, number_2)); // Here we know that modulus operator is not defined for float values thus to resolve it we have used fmod function.
            } else {
                printf("Division by 0 is not allowed as it will give infinty.");
            }
        }
        else {
            quit = 1;
            printf("Invalid operation\n");
        }
        printf("Do you want to continue operation? \n");
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y') {
            quit = 1;
        }
    }
    printf("Thanks for using this mini calculator.");
    return 0;
}
