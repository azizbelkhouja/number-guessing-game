#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Range Validation: You might want to add some validation to ensure that the user enters a valid range. 
For example, you could check if the minimum number is less than the maximum number.

Input Validation: You should consider adding input validation to ensure that the user enters a valid number 
when prompted to guess. If the user enters something that is not a number, the program could go into an infinite loop.

Feedback for Out of Range Guesses: Currently, if the user guesses a number outside the specified range, 
there is no feedback given. You could add a message to inform the user that the guess is out of range and prompt them to guess again.

Optional: Display the Range: It might be helpful to display the range again to the user before prompting them to guess. 
This can help them remember the boundaries within which they should guess.

Optional: Allow the User to Play Again: After the game ends (whether the user wins or loses), 
you could ask the user if they want to play again. If they do, reset the game and generate a new random number.
*/
int main()
{

    int minimumnumber, maximumnumber;
    int thenumber, usernumber;

    printf("--insert a range-- \n");
    printf("from: ");
    scanf("%d", &minimumnumber);
    printf("to: ");
    scanf("%d", &maximumnumber);

    srand(time(NULL));

    thenumber = rand() % (maximumnumber-minimumnumber) + minimumnumber;

    //printf("the number you must guess is = %d\n", thenumber);
    
    printf("--------------\n");

    do {
        printf("insert a number: ");
        scanf("%d", &usernumber);

        if (usernumber == thenumber)
        {
            printf("Good Guess !! You won\n");
            break;
        }
        if (usernumber > thenumber)
        {
            printf("Go Lower\n");
        }
        if (usernumber < thenumber)
        {
            printf("Go Higher\n");
        }
        

    } while (usernumber != thenumber);

    return 0;
}