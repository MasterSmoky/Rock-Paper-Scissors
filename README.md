# Rock Paper Scissors Game in C

## Overview
This is a simple **Rock Paper Scissors** game implemented in **C** where the user plays against the computer. The game allows the player to select one of the three moves (Rock, Paper, Scissors), and the computer randomly chooses a move. The program determines the winner based on the standard rules of Rock Paper Scissors.

## Features
- Player can choose between Rock (1), Paper (2), or Scissors (3).
- The computer randomly selects a choice.
- The game handles input validation for player’s choice.
- Displays the result of each round, showing whether the player or computer wins, or if it’s a draw.
- Option to quit the game anytime.

## How to Play
1. When prompted, input your choice using numbers:
    - `1` for Rock
    - `2` for Paper
    - `3` for Scissors
2. The program will compare your choice with the computer’s choice and display the result.
3. You can choose to play again or quit the game.

## Requirements
- C compiler (e.g., GCC) to compile and run the code.

## Instructions
1. Clone or download this repository.
2. Open a terminal and navigate to the directory where the file is saved.
3. Compile the code:
   ```bash
   gcc -o rps rps.c
   ```
4. Run the program:
   ```bash
   ./rps
   ```

## Code Explanation

### `computerChoice` Function
This function generates a random number between 1 and 3 to simulate the computer's choice. It uses the `rand()` function and `srand()` for seeding the random number generator.

### `playerChoiceValidation` Function
This function validates the player’s input, ensuring they enter a number between 1 and 3. If the input is valid, it compares the player’s choice to the computer's choice and prints the result. If the input is invalid, it prompts the player to re-enter their choice.

### `main` Function
The main function is the starting point of the program. It presents a menu with options to start or quit the game. It keeps looping, allowing the player to play multiple rounds until they choose to quit.

## Example Run

```
Welcome to RPS ( Rock Paper Scissors )
--------------------------------------
MENU:
1. Rock
2. Paper
3. Scissors
--------------------------------------

Do you wanna play ? ( p to play, q to quit ): p

Chose your play ( Use numbers (1..3) ): 1

-----------------------------------------------------
Computer: 3, Player: 1, Result: Computer won!
-----------------------------------------------------

Do you wanna play ? ( p to play, q to quit ): p

Chose your play ( Use numbers (1..3) ): 2

-----------------------------------------------------
Computer: 1, Player: 2, Result: Player won!
-----------------------------------------------------
```

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributions
Feel free to fork, improve, and submit pull requests. Contributions are always welcome!