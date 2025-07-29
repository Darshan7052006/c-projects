
#include <stdio.h>
#include <math.h>

int main()
{
    int n, option, quit = 0;
    double base, exponent;

    while (!quit)
    {
        printf("\n---Menu---\n");
        printf("1. Factorial\n");
        printf("2. Find a^b\n");
        printf("3. Quit\n");
        printf("Choose one option from above.\n");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
            {
                printf("Enter the value of n: ");
                scanf("%d", &n);
                if (n < 0)
                {
                    printf("Factorial for negative numbers is invalid");
                }
                else 
                {
                    long long factorial = 1;
                    for(int i = 1; i <= n; i++){
                        factorial *= i;
                    }
                    printf("The factorial for %d is: %lld\n", n, factorial);
                    break;
                }
            }
            case 2:
            {
                printf("Enter the base: ");
                scanf("%lf", &base);
                printf("Enter the exponent: ");
                scanf("%lf", &exponent);
                double result = pow(base, exponent);
                printf("%lf ^ %lf = %lf\n", base, exponent, result);
                break;
            }
            case 3:
            {
                quit = 1;
                printf("Thanks for coming.\n");
                break;
            }
        }

        char response;
        printf("Do you want to continue? ");
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y')
        {
            quit = 1;
        }
    }
    printf("It was our pleasure to have you, Please visit us again.\n");
    return 0;
}
