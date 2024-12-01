#include <stdio.h>

struct student {
    int ID;
    char name[50];
    float grade;
};

int main(void) {
    struct student s;

    s.ID = 24;
    snprintf(s.name, sizeof(s.name), "Eunju");
    s.grade = 4.200000;

    printf("ID: %d\n", s.ID);
    printf("Name: %s\n", s.name);
    printf("Grade: %.6f\n", s.grade);

    return 0;
}

