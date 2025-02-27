#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


// Computer choice fucntion

int computerChoice() {
    return rand() % 3 + 1;
}


// Calculate the result and display on screen

void displayResult(int computer, int player) {
    printf("\n-----------------------------------------------------\n");
    printf("\nComputer: %d, Player: %d, Result: ", computer, player);

    if (computer == player) {
        printf("Draw!\n");
    } else if ((computer == 1 && player == 2) || 
               (computer == 2 && player == 3) || 
               (computer == 3 && player == 1)) {
        printf("Player won!\n");
    } else {
        printf("Computer won!\n");
    }
    printf("\n-----------------------------------------------------\n");
}


// Check if the player input is valid

int getPlayerChoice() {
    char input[10];
    int player = 0;

    while (1) {
        printf("\nChoose your play (Use numbers 1 for Rock, 2 for Paper, 3 for Scissors): ");
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
            if (player >= 1 && player <= 3) {
                break;
            }
        }

        printf("\nInvalid input! Please enter a number between 1 and 3.\n");
    }

    return player;
}


// Initiate the game and interact with the user

int main() {
    char start;
    srand(time(NULL));

    printf("\nWelcome to RPS (Rock Paper Scissors)\n");
    printf("--------------------------------------\n");
    printf("MENU:\n1. Rock\n2. Paper\n3. Scissors\n");
    printf("--------------------------------------\n");

    while (1) {
        printf("\nDo you want to play? (p to play, q to quit): ");
        scanf(" %c", &start);

        if (start == 'p') {
            int player = getPlayerChoice();
            int computer = computerChoice();
            displayResult(computer, player);
        } else if (start == 'q') {
            printf("Ok, see ya!\n");
            break;
        } else {
            printf("Invalid input!\n");
        }
    }

    return 0;
}