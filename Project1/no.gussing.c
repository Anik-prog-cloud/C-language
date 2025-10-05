#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guessed=0;
    int guessed;

    // Print the random number
    //printf("Random number: %d\n", randomNumber);
    do{
      printf("Guess the number:");
      scanf("%d",&guessed);
      if(guessed>randomNumber){
        printf("Lower number please!\n");
      }
      else if(randomNumber>guessed){
        printf("Higher number please!\n");
      }
      else{
        printf("Congrates!!\n");
      }
      no_of_guessed++;
  }while(guessed!=randomNumber);
  printf("You guessed the number in %d guesses",no_of_guessed);
    return 0;
}
