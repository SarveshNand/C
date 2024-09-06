#include <stdio.h>

int main(){

    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift



    // int x = 6;  // 6 =   00000110
    // int y = 12; // 12 =  00001100
    // int z = 0;  // 0 =   00000000

    int x = 6;  // 6 =  00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 4 =  00000100

    z = x & y;
    printf("AND = %d\n", z);

    // int x = 6;  // 6 =   00000110
    // int y = 12; // 12 =  00001100
    // int z = 0;  // 14 =  00001110

    z = x | y;
    printf("OR = %d\n", z);

    // int x = 6;  // 6 =   00000110
    // int y = 12; // 12 =  00001100
    // int z = 0;  // 10 =  00001010

    z = x ^ y;
    printf("XOR = %d\n", z);

    // int x = 6;  // 6 =  00000110
    // int y = 12; // 12 = 00001100
    // int z = 0;  // 12 = 00001100   -->  assigned x so it will shift on left the first digit to the last converting it to 12, the more we shift left the double we get 

    z = x << 1;
    printf("SHIFT LEFT = %d\n", z);

    // int x = 6;  // 6 =  00000110
    // int y = 12; // 12 = 00001100
    // int z = 0;  // 3 =  00000011 --> assigned x so it will shift on right the first digit to the last converting it to 3, the more we shift right the half we get (minimum 1 we will get for sure)

    z = x >> 1;
    printf("SHIFT RIGHT = %d\n", z);


    return 0;
}