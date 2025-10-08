#include <stdio.h>
#include <stdlib.h>
#define size 8

int cell_8_simulation(int[], int);
int print_array(int[], int);

int print_array(int array[], int n)
{
    printf("\n[");
    int i;
    for (i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf("%4d|", array[i]);
        }
        else
        {
            printf("%4d]", array[i]);
        }
}
printf("\n");
}
int cell_8_simulation(int array[], int days)
{
    int d = 1;
    int temp[size];
    int right, left;
    while (d <= days)
    {
        for (int i = 0; i < size; ++i)
        {
            left = (i == 0) ? 0 : array[i - 1];
            right = (i == size - 1) ? 0 : array[i + 1];
            temp[i] = (left == right) ? 0 : 1;
        }
        for (int i = 0; i < size; ++i)
        {
            array[i] = temp[i];
        }
        printf("Situation after day: %d", d);
        print_array(array, size);
        ++d;
    }
}
int main()
{
int array[]={1,0,0,1,1,1,0,1};
cell_8_simulation(array,4);
    return 0;
}