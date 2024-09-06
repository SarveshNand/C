#include <stdio.h>

// void printAge(int age){
//     printf("You are %d age years old\n", age);
// }

void printAge(int *pAge){
    printf("You are %d age years old\n", *pAge);    // dereference
}

int main(){

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

                                    // ADVANTAGES
                                            // 1) Less time in program execution.
                                            // 2) Working on original Variable.
                                            // 3) We can create Data Structures (linked-list, stack, queue).
                                            // 4) Returning more than one values from functions.
                                            // 5) Searching and sorting large data very easily.
                                            // 6) Dynamically memory allocation.
    
    int age = 21;
    int *pAge = NULL;   // good practice to assign NULL if declaring a pointer
    pAge = &age;

    // printf("address of age: %p\n", &age);
    // printf("value of pAge: %p\n", pAge);
    
    // printf("size of age: %d bytes\n", sizeof(age));
    // printf("size of pAge: %d bytes\n", sizeof(pAge));

    // printf("value of age: %d\n", age);
    // printf("value at stored address: %d\n", *pAge); // dereferencing

    // printAge(age);
    printAge(pAge);

    return 0;
}