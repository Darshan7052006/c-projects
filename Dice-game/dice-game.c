#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n---DICE GAME---\n");
    printf("--TEST YOUR PREDICTIONS--\n");
    printf("-- LETS SEE, HOW PRO YOU ARE IN A GUESS ? --\n");
    char response;
    do
    {
        int i, k, j, score, quit = 0, sum;
        int user_gues, chance_count = 1;
        long t = time(NULL);
        srand(t);
        while (!quit)
        {
            k = rand() % (6) + 1;
            j = rand() % (6) + 1;
            sum = k + j;
            printf("Enter the guess: ");
            scanf("%d", &user_gues);
            if (user_gues > 12 || user_gues <2)
            {
                printf("Sum of two Numbers on dice cannot exceed 12 and cannot be less than 2.\n");
                quit = 1;
            }
            else if (user_gues != sum)
            {
                printf("Darn! Bad attempt\n");
                printf("The sum is %d\n", sum);
                printf("Your chance count is %d\n", chance_count);
                score = -5 * chance_count;
                printf("Your score is %d\n", score);
            }
            else if (user_gues == sum)
            {
                printf("BRAVO!! You were correct.\n");
                printf("The sum is %d\n", sum);
                printf("Your chance count is %d\n", chance_count);
                score +=10;
                printf("Your score is %d\n", score);
                quit = 1;
            }
            chance_count++;
        }
        printf("Do you want to continue: ");
        getchar();
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y')
        {
            quit = 1;
        }
    } while (response == 'Y' || response == 'y');
    return 0;
}