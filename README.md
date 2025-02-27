# Rock Paper Scissors Game in C

This is a simple **Rock Paper Scissors** game implemented in C.

## How to Play

1. Run the program.
2. Choose your play by entering:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
3. The computer will randomly choose its play.
4. The winner will be displayed on the screen.
5. You can continue playing or quit the game by entering `p` (play) or `q` (quit).

## Requirements

- A C compiler (e.g., `gcc`)

## Compilation and Execution

### Using GCC:
```sh
gcc -o rps game.c
./rps
```

## Example Run

```
Welcome to RPS (Rock Paper Scissors)
--------------------------------------
MENU:
1. Rock
2. Paper
3. Scissors
--------------------------------------

Do you want to play? (p to play, q to quit): p
Choose your play (Use numbers 1 for Rock, 2 for Paper, 3 for Scissors): 2

-----------------------------------------------------
Computer: 1, Player: 2, Result: Player won!
-----------------------------------------------------

Do you want to play? (p to play, q to quit): q
Ok, see ya!
```

## Code Structure

- `computerChoice()`: Generates the computer's choice using `rand() % 3 + 1`, which results in a random number between 1 and 3.
- `displayResult()`: Compares choices and prints the result by checking various conditions to determine the winner or a draw.
- `getPlayerChoice()`: Gets and validates player input, ensuring the user enters a valid number (1, 2, or 3).
- `main()`: Controls the game loop, prompting the user to play or quit and calling the appropriate functions.

## Understanding `getPlayerChoice()`

The function `getPlayerChoice()` is responsible for getting and validating the player's input. Below is the function with explanations:

```c
int getPlayerChoice() {
    char input[10];  // Buffer to store user input
    int player = 0;  

    while (1) {  
        printf("\nChoose your play (Use numbers 1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%s", input);  // Read input as a string to prevent errors

        // Check if the input is a valid number
        int isValid = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {  // If any character is not a digit, it's invalid
                isValid = 0;
                break;
            }
        }

        if (isValid) {
            player = atoi(input); // Convert the valid input to an integer
            if (player >= 1 && player <= 3) { // Ensure the number is within range
                break; // Exit the loop if input is valid
            }
        }

        printf("\nInvalid input! Please enter a number between 1 and 3.\n");
    }

    return player; // Return the valid choice
}
```

### Explanation:

- **Input Handling:** The input is stored as a string to handle potential invalid inputs (e.g., letters).
- **Validation Loop:** The function keeps asking for input until a valid number (1, 2, or 3) is provided.
- **Digit Checking:** Each character in the input is checked to ensure it's a number.
- **Conversion:** Once validated, `atoi()` converts the string to an integer.
- **Error Handling:** If the input is invalid, an error message is displayed, and the user is asked to re-enter.

## License

This project is open-source and available under the MIT License.

