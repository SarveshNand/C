#include <stdio.h>
#include <stdbool.h>

int main(){
    
            // logical operator = && (AND) checks if two conditions are true

    // float temp = 25;
    // bool sunny = true;

    // if (temp >= 0 && temp <= 30 && sunny)
    // {
    //     printf("\nThe weather is good!");
    // }
    // else
    // {
    //     printf("\nThe weather is bad!");
    // }



            // logical operator = || (OR) checks if at least one condition is true

    float temp = 25;

    if (temp <= 0 || temp >= 30)
    {
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }



            // logical operator = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if (!sunny)
    {
        printf("\n It's cloudy outside!");
    }
    else
    {
        printf("\nIt's sunny outside!");
    }
    
    return 0;
}