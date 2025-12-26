#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

void display(struct Student s) {
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s = {582, "Pavani", 90.5};

    display(s);

    return 0;
}
