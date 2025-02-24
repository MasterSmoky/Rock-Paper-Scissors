```markdown
# Rock Paper Scissors (RPS) Game

This is a simple command-line implementation of the classic Rock Paper Scissors game in C. The player competes against the computer, which makes random choices.

## How to Play

1. Run the program.
2. Choose your play by entering a number:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
3. The computer will also make a random choice.
4. The result of the game will be displayed:
   - Draw
   - Player won
   - Computer won

## Features

- Random computer choice using `rand()`.
- Input validation to ensure the player enters a valid number.
- Clear display of the game result.

## Code Overview

### `computerChoice` Function

Generates a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors).

```c
int computerChoice() {
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    return computer;
}
```

### `playerChoiceValidation` Function

Validates the player's input and determines the result of the game.

```c
void playerChoiceValidation() {
    int player;
    int computer = computerChoice();
    char input[10];

    do {
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
                } else if (computer == 1 && player == 2) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                } else if (computer == 2 && player == 3) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                } else if (computer == 3 && player == 1) {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Player won!\n");
                    printf("\n-----------------------------------------------------\n");
                } else {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nComputer: %d, Player: %d, Result: ", computer, player);
                    printf("Computer won!\n");
                    printf("\n-----------------------------------------------------\n");
                }
            } else {
                printf("\nInvalid input! Please enter a number between 1 and 3.\n");
            }
        }

    } while (player != 1 && player != 2 && player != 3);
}
```

### `main` Function

Displays the game menu and handles the player's choice to play or quit.

```c
int main() {
    char start;
    int choice;

    do {
        printf("\nWelcome to RPS ( Rock Paper Scissors )\n");
        printf("--------------------------------------\n");

        printf("MENU:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("--------------------------------------\n");

        printf("\nDo you wanna play ? ( p to play, q to quit ): ");
        scanf(" %c", &start);

        if (start == 'p') {
            playerChoiceValidation();
        } else if (start == 'q') {
            printf("Ok, see ya!");
            break;
        } else {
            printf("Invalid input!\n");
        }
    } while (start == 'p' || start == 'q');

    return 0;
}
```

## Compilation and Execution

To compile and run the program, use the following commands:

```sh
gcc -o rps RPS.c
./rps
```

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgements

- This project was created as a coding challenge to practice C programming.
- Inspired by the classic Rock Paper Scissors game.

Enjoy playing Rock Paper Scissors!
```