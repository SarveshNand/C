#include <stdio.h>
#include <string.h>

int main(){

    // for loop = repeats a section of code a limited amount of times

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }



    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name\n");
        printf("What's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    printf("Hello %s\n", name);
    


    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
        
    } while (number > 0);
    
    printf("sum: %d", sum);

    return 0;
}