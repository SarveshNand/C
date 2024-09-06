#include <stdio.h>

void birthday1(){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear... YOU!");
    printf("\nHappy Birthday to you!\n");
}

void birthday2(char x[], int y){
    printf("\nHappy Birthday dear %s!", x);
    printf("\nYou are %d years old\n", y);
}

double square(double x){
    double result = x * x;
    return result;
}


int main(){
    
    birthday1();


    char name[] = "Sarvesh";
    int age = 20;

    birthday2(name, age);


    double x = square(3.14);
    printf("%lf", x);
    
    return 0;
}