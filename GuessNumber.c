#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int num,guess,times=1;
    srand(time(0));
    num = rand()%100 +1; //will generate a random number between 1 to 100
    //printf("The number is %d\n", num);     //(this is the line to print the real random number)
    // Loop will run till the number is guessed
    printf("Guess the number that's between 1 to 100\n");
    do{

       scanf("%d",&guess);
       if(guess>num){
            printf("Guess a lower number than this\n");
       }
       else if(guess<num){
            printf("Guess a higher number than this\n");
       }
       else{
            printf("You guessed the correct number in %d attempts\n",times);
       }
       times++;
    }while(guess!=num);
    return 0;
}
