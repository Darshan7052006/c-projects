#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int k,i;
long t;
t=time(NULL);
srand(t);
for(i=1;i<=5;i++){
    k=rand()%100;
    printf("The winner %d got number: %d\n",i,k);
 if(k>0 && k<=20){
    printf("Congratulations! you have won a set of exclusive ball pens\n");
 }
 else if(k>20 && k<=40)
{
    printf("Congratulations! you have won a brand new bucket.\n");

}
  else if(k>40 && k<=60){
    printf("Congratulations! you have won a brand new phone worth rupees 12k.\n");
 }
 else if(k>60 && k<=80){
    printf("Oops! Better luck next time.\n");
 }
 else if(k>80 && k<=100){
    printf("Congratulations! you have won First prize and that is a trip tu Dubai.\n");
 }}
 return 0;
}