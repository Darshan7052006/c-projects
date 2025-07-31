#include <stdio.h>
#define MAX 10

int main()
{
    int n, i = 0;
    int x[MAX] = {0};
    printf("You can input at most %d digit number.\n", MAX);
    printf("Enter the total number of digits you want to input in a number: ");
    scanf("%d", &n);
    if (n <= 0 || n > 10)
    {
        printf("Error detected,The Program is terminated");
        return 0;
    }
    else if (n > 0 && n <= 10)
    {
        for (i = MAX - n; i < MAX; i++)
        {
            printf("Enter the digit: ");
            scanf("%d", &x[i]);
        }
        printf("The number you gave is: ");
        for (i = MAX - n; i < MAX; i++)
        {
            printf("%d", x[i]);
        }
    }
    printf("\n\n");
    // Now we will ask the user for the digit he/she wants to add in the given number.
    int d;
    printf("Enter a digit >=1 and <=9 to add: ");
    scanf("%d", &d);
    if (d <= 0 || d >= 10)
    {
        printf("Invalid input, valid is from 1 to 9 ");
        return 0;
    }
    // carry is used to store any change that will be due to change in unitplace after additon.
    int carry = 0, unitPlace, sum;
   // unit place is used for last digit of the number given.
    int newCount = 0;
    for (i = MAX - 1; i >= 0; --i)
    {
        if (i == MAX - 1)
        {
            sum = x[i] + d; // It will only happen when the digit is added to index number 9.
        }
        else
        {
            sum = x[i] + carry; // It will only happen when we are not on last room or index number.
        }
        unitPlace = sum % 10; // Suppose we have 13 so using modulus function the unit place will only hold 3 just like we do in manual addition.
        carry = sum / 10;     // above we took 3 for unitplace now the 1 will be taken as carry.
        x[i] = unitPlace;
        if (carry == 0)
            break; // if carry is 0 then we only changed the unit place and we can say we added a digit which affected the unit place of the given number.
    }
    if (i < 0){ // It means the new number we got after addition holds the same number of digits like the one we gave. 
        newCount = MAX;
    }
    else if (i < MAX - n && x[i] != 0) /* When index number is less than the (max-n) it means the number now have one more digit.
    we also have to check that the next digit should not be equal to zero or the compiler will ignore it. */    
    {
        newCount = n + 1; // Here the new count represents the number of digits our new number will hold.
    }
    else
    {
        newCount = n;
    }
    printf("Result: \n");
    for (i = MAX - newCount; i < MAX; ++i)
    {
        printf("%d", x[i]);
    }
    return 0;
}