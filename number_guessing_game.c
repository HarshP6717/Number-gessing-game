#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0)); //write a code to genrate random number between 1 to 100 in c using chat gpt

    
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses=0;
    int guessed_number;
    do{
        printf("guess the number ");
        scanf("%d",&guessed_number);
        if(guessed_number>randomNumber)
        {
            printf("lower number please !\n");
        }
        else if(guessed_number<randomNumber)
        {
            printf("higher number please !\n");
        }
        else {
            printf("congrats \n");
        }
        number_of_guesses++;
    } while(guessed_number!=randomNumber);

    
    printf("\n your guessed the number in %d of guesses",number_of_guesses);


    return 0;
}