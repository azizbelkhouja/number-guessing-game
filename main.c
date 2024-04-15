#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int main()
{

    int minimumnumber, maximumnumber;
    int thenumber, usernumber;

    do {

    printf("--insert a range-- \n");
    printf("from: ");
    scanf("%d", &minimumnumber);
    printf("to: ");
    scanf("%d", &maximumnumber);

    } while (minimumnumber>maximumnumber);

    srand(time(NULL));

    thenumber = rand() % (maximumnumber-minimumnumber) + minimumnumber;

    //printf("the number you must guess is = %d\n", thenumber);
    
    printf("\n--------------\n");
    printf("RANGE %d - %d\n\n", minimumnumber, maximumnumber);

    
    do {
        printf("insert your guess: ");
        
        if (scanf("%d", &usernumber) != 1) {
            while (getchar() != '\n');
            continue;
        }
        
        if (usernumber>maximumnumber || usernumber<minimumnumber) printf("number out of the range, ");

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
        

    } while ((usernumber != thenumber));

    return 0;
}