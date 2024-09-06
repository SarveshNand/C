#include <stdio.h>
#include <ctype.h>

int main()
{
    // Arrays of questions and options
    char questions[3][100] = {
        "1. What year did the C language debut?: ",
        "2. Who is credited with creating C?: ",
        "3. What is the predecessor of C?: "
    };

    char options[3][4][100] = {
        {"A. 1969", "B. 1972", "C. 1975", "D. 1999"},
        {"A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown"},
        {"A. Objective C", "B. B", "C. C++", "D. C#"}
    };

    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = 3;

    char guess;
    int score = 0;  // Initialize score to 0

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("**********************\n");
        printf("%s", questions[i]);
        printf("**********************\n");

        // Print options for the current question
        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", options[i][j]);
        }

        printf("Guess (A, B, C, or D): ");
        // Read the single character input
        guess = getchar();
        // Consume any extra characters in the buffer (like newline)
        while (getchar() != '\n');

        // Convert guess to uppercase
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! The correct answer was %c.\n", answers[i]);
        }
    }

    printf("*********************************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("*********************************\n");

    return 0;
}