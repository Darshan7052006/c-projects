#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
here we have used macro and the # define function will let us use words like rock,paper,scissor, etc. and as the compiler encounter any word it
will convert that word into the assigned integer. for example we have written [# define ROCK 1] so here whenever the compiler will see the word
ROCK it will replace it with 1. similarly when it will encounter PAPER then it will count it as 2.
it helps us increase the readability for the user so that he can use rock instead of 1, same with paper and scissor.

*/
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0
int rock_paper_scissor(int player1, int player2)
{
    int result;
    if (player1 == ROCK && player2 == PAPER)
    {
        result = PLAYER2_WIN;
    }
    else if (player1 == ROCK && player2 == SCISSORS)
    {
        result = PLAYER1_WIN;
    }
    else if (player1 == PAPER && player2 == ROCK)
    {
        result = PLAYER1_WIN;
    }
    else if (player1 == PAPER && player2 == SCISSORS)
    {
        result = PLAYER2_WIN;
    }
    else if (player1 == SCISSORS && player2 == PAPER)
    {
        result = PLAYER1_WIN;
    }
    else if (player1 == SCISSORS && player2 == ROCK)
    {
        result = PLAYER2_WIN;
    }
    else
    {
        result = DRAW;
    }
    return result;
}
int get_user_input()
{
    int choice;
    do
    {
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter the input[1,2,3]: \n");
        scanf("%d", &choice);
        while (getchar() != '\n');  // clear input buffer

        if (!(choice >= 1 && choice <= 3))
        {
            printf("Error! Invalid Input, Please choose between 1 to 3.");
        }
    } while (!(choice >= 1 && choice <= 3));
    return choice;
}
void print_word(int v)
{
    if (v == ROCK)
    {
        printf("ROCK.\n");
    }
    else if (v == PAPER)
    {
        printf("PAPER.\n");
    }
    else if (v == SCISSORS)
    {
        printf("SCISSORS.\n");
    }
}
int main()
{
    int user_score = 0;
    int computer_score = 0;
    srand(time(NULL));
    int quit = 0;
    while (!quit)
    {
        int user_input = get_user_input();
        int computer_choice = (rand() % 3) + 1;
        printf("User choose: ");
        print_word(user_input);
        printf("Computer choose: ");
        print_word(computer_choice);
        int result = rock_paper_scissor(user_input, computer_choice);
        if (result == DRAW)
        {
            printf("It is a draw.");
        }
        else if (result == PLAYER1_WIN)
        {
            printf("User has won the round.");
            user_score++;
        }
        else if (result == PLAYER2_WIN)
        {
            printf("computer has won the round.");
            computer_score++;
        }
        printf("\n\n");
        printf("\n----------------------------\n");
        printf("User's Score: %d \n", user_score);
        printf("Computer's score: %d \n", computer_score);
        printf("\n-----------------------------\n");
        printf("\n\n");
        printf("If You want to continue,Choose 'Y' or 'y'\n");
        char response;
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y')
        {
            quit = 1;
        }
    }
    printf("Final score..... \n");
    printf("\n\n");
        printf("\n----------------------------\n");
        printf("User's Score: %d\n", user_score);
        printf("Computer's score: %d\n", computer_score);
        printf("\n-----------------------------\n");
        printf("\n\n");
        if(user_score == computer_score){
            printf("It was a draw.\n");
        }
        else if(user_score > computer_score){
            printf("User has won the game.\n");
        }
        else if(user_score < computer_score){
            printf("Computer has won the game.\n");
        }
    return 0;
}