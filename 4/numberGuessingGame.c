#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too HIGH!\n");
        }
        else if (guess < answer)
        {
            printf("Too LOW!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("**************************");
    printf("\nanswer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**************************");

    return 0;
}