#include <stdio.h>

int main()
{
    int amount, age, option;
    char choice;

    while (1)
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("The age is %d\n", age);

        if (age >= 13 && age <= 19)
        {
            printf("The age is teenage, Welcome in the teen world\n");

            while (1)
            {
                // Display menu options
                printf("What do you want to do next?\n");
                printf("Choose one option:\n");
                printf("Option 1: Start investing\n");
                printf("Option 2: Have a consultant give you advice\n");
                printf("Option 3: Leave the game and quit\n");

                scanf("%d", &option);

                // Show user's choice
                printf("You have chosen option number %d\n", option);

                if (option == 1)
                {
                    printf("Please enter the amount: ");
                    scanf("%d", &amount);
                    printf("Thanks for adding %d in the wallet.\n", amount);
                    break; // Exit inner loop
                }
                else if (option == 2)
                {
                    printf("You can contact our consultant on number: 9875638949\n");
                    break; // Exit inner loop
                }
                else if (option == 3)
                {
                    printf("Thanks for visiting our game.\n");
                    return 0; // Exit entire program
                }
                else
                {
                    printf("Invalid option. Please try again.\n");
                }
            }

            break; // Exit outer loop after valid interaction
        }
        else if (age < 13)
        {
            printf("You are too small. Access denied.\n");
        }
        else
        {
            printf("Sorry, you are not a teenager. Access denied.\n");
        }

        // Ask to continue if not exited
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
        {
            printf("Please visit us again when you are eligible.\n");
            break;
        }
    }

    return 0;
}