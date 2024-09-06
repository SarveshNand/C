#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("you did good!\n");
        break;
    case 'C':
        printf("you did okay!\n");
        break;    
    case 'D':
        printf("at least it's not an F!\n");
        break;
    case 'E':
        printf("Border line\n");
        break;
    case 'F':
        printf("YOU FAILED!\n");
        break;
    
    default:
        printf("Please enter only valid grades");
        break;
    }
}