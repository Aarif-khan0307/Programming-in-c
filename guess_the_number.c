//     project 1:     guess the number 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;
    //printf("The number is %d \n",number);
    do{
        printf("guess the number between 1 and 100 :");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("higher number please\n");
        }
        else{
            printf("you have guess the right number in %d attempts",nguesses);
        }
        nguesses++;
    }
     while(guess!=number);
}    