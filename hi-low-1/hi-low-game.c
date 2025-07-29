#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char response;

    do
    {
        printf("***********************************************************\n");
        printf("**----------------Welcome to Guessing Game---------------**\n");
        printf("**---------You can guess if you understand the MATH -----**\n");
        printf("**---------------------------------------------------------\n");
        printf("\n\n");
        const int MAX_CHANCES = 7;
        int computer_guess;
        long t = time(NULL);
        srand(t);
        computer_guess = rand() % 100;
        printf("Program has guessed a number, what you need to do is match it.\n");
        printf("Remember, you have only 7 chances.\n");
        printf("Best wishes...\n\n");
        int user_guess;
        int chance_count = 1;
        int match = 0;
        while (match == 0 && chance_count <= MAX_CHANCES)
        {
            printf("Enter your guess: ");
            scanf("%d", &user_guess);
            if (user_guess > computer_guess)
            {
                printf("Your guess is high\n");
                printf("Remaining chances are %d\n", MAX_CHANCES - chance_count);
            }
            else if (user_guess < computer_guess)
            {
                printf("Your guess is low\n");
                printf("Remaining chances are %d\n", MAX_CHANCES - chance_count);
            }
            else if (user_guess == computer_guess)
            {
                printf("Bingo!You have won the game\n");
                printf("You have guessed the right answer in %d chances\n", chance_count);
                if (chance_count <= 3)
                {

                    printf("You are Super Duper NINJA!\n");
                }
                else if (chance_count <= 5)
                {

                    printf("You are crazy NINJA!\n");
                }
                else
                {

                    printf("You have potential to be a NINJA!\n");
                }
                match = 1;
                break;
            }
            if (match == 0)
            {
                chance_count++;
            }

            if (match == 0 && chance_count > 7)
            {
                printf("Game over!!! Try to be Mathemetical\n");
                printf("The correct number was: %d\n", computer_guess);
            }
        }
    printf("\nDo you want to continue playing?\n");
    getchar();
    scanf("%c", &response);
    
        } while (response == 'y' || response == 'Y');
        printf("Thank you for playing this game.\n");
        return 0;
       }