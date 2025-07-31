#include <stdio.h>

int main(){
int r,c;
// Here r represents the number of salesperson and c represents the number of items.
printf("Enter the number of salespersons: ");
scanf("%d", &r);
printf("Enter the number of items: ");
scanf("%d", &c);
// After taking inputs from user about the number of items and salesperson, we will now declare a 2-D array.
double saledata[r][c];
printf("Enter the sale data: \n\n");
int i,j;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
    printf("Sale amount for salesperson number %d and item number %d is: ", i+1,j+1);
    scanf("%lf", &saledata[i][j]);
}
}
//now we have declared our array. 
//The next step is to display our report.
printf("-------------------\n");
printf("----SALES DATA----\n");
printf("-------------------\n");
double total=0.0;
double comm;
for(i=0;i<r;i++){
    printf("Sale data for sales person number %d\n", i+1);
    printf("----------------------------------------\n");
    total =0.0; 
    for(j=0;j<c;j++){
        printf("\tItem %d: $0.2lf\n", i+1,saledata[i][j]);
        total+=saledata[i][j];
    }
    printf("\tTotal : $0.2lf\n", total);
    comm=total*0.1;
    printf("\tComission : $%0.2lf", comm);
    printf("\n\n");
}
    return 0;
}