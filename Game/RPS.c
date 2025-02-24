#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/*

Rock Paper Scissors

*/

int computerChoice(){
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    return computer;
}

void playerChoiceValidation(){

    int player;
    int computer = computerChoice();
    char input[10];

    do
    {
        printf("\nChose your play ( Use numbers (1..3) ): ");
        scanf("%s", input);

        // Check if the input is a valid number
        int isValid = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                isValid = 0;
                break;
            }
        }

        if (isValid) {
            player = atoi(input); // Convert the valid input to an integer

            if (player == 1 || player == 2 || player == 3) {
                if (computer == player) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Draw!\n");
                    printf("\n-----------------------------------------------------\n");
                }
                else if (computer == 1 && player == 2) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                }
                else if (computer == 2 && player == 3) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                }
                else if (computer == 3 && player == 1) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                }
                else {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Computer won!\n");
                    printf("\n-----------------------------------------------------\n");
                }
            }
            else {
            printf("\nInvalid input! Please enter a number between 1 and 3.\n");
            }
        }

    } while (player != 1 && player != 2 && player != 3);

}

int main(){

    char start;
    int choice;

    do
    {
        printf("\nWelcome to RPS ( Rock Paper Scissors )\n");
        printf("--------------------------------------\n");

        printf("MENU:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("--------------------------------------\n");

        printf("\nDo you wanna play ? ( p to play, q to quit ): ");
        scanf(" %c", &start);

        if(start == 'p'){
            playerChoiceValidation();
        }
        else if(start == 'q'){
            printf("Ok, see ya!");
            break;
        }
        else{
            printf("Invalid input!\n");
        }
    } while (start == 'p' && start == 'q');
    
    return 0;
}