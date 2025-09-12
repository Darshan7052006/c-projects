#include <stdio.h>
void toh(int n, int source, int aux, int destination)
{
    if (n == 1)
    {
        printf("Move the disk from tower number %d to destination %d\n", source, destination);
        return;
    }
    toh(n - 1, source, destination, aux); // here we have put all n-1 disks from source to auzillary and the destination is used as auxillary tower.
    toh(1, source, aux, destination);     // Now after we have shifted all n-1 disks we have to shift the last placed disk from source to destination.
    toh(n - 1, aux, source, destination); // Now the n_1 disks will be put back into the destination to complete the tower of hanoi.
}
int main()
{
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    toh(i, 1, 2, 3); // There are 3 disks, 1st position is for source tower and 2nd is the auxillary tower while the third one is the destination.
    return 0;
}