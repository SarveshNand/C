#include <stdio.h>
#include <string.h>

struct Students
{
    char name[12];
    float gpa;
};


int main(){

    struct Students student1 = {"Spongebob", 3.0};
    struct Students student2 = {"Patrick", 2.5};
    struct Students student3 = {"Sandy", 4.0};
    struct Students student4 = {"Squidward", 2.0};

    struct Students students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}