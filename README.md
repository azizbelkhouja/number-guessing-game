# Number Guessing Game

This is a simple number guessing game implemented in C. The game prompts the user to input a range of numbers, generates a random number within that range, and asks the user to guess the number. The user continues to guess until they correctly identify the randomly generated number.

## How to Use

1. Compile the code using a C compiler. For example, you can use GCC:
    ```
    gcc -o number_guessing_game number_guessing_game.c
    ```

2. Run the compiled executable:
    ```
    ./number_guessing_game
    ```

3. Follow the prompts to input a range of numbers and start guessing.

## Features

- The game allows the user to specify a range of numbers within which the random number is generated.
- If the user enters a number outside the specified range, the game notifies them and prompts them to guess again.
- After each guess, the game provides feedback to the user, indicating whether they should go higher or lower.
- Once the user correctly guesses the number, they are notified of their success, and the game ends.

## Notes

- The game uses the `srand()` function with the current time as the seed to generate random numbers.
- Input validation is implemented to handle cases where the user enters non-numeric input.
