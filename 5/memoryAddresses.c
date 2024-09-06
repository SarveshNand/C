#include <stdio.h>

int main(){

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    double d[4];
    short e = 'V';
    int f = 'W';
    double g = 'U';
    int h[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("%d bytes\n", sizeof(f));
    printf("%d bytes\n", sizeof(g));
    printf("%d bytes\n", sizeof(h));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);
    printf("%p\n", &g);
    printf("%p\n", &h);

    return 0;
}