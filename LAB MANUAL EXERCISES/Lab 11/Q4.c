#include <stdio.h>
#include <string.h>

struct Address {
    char street[50];
    char city[20];
    char state[20];
    int zip;
};

struct Course {
    char name[30];
    float gpa;
};

struct Student {
    float cgpa;
    struct Course course[3];  // assuming 3 courses
    struct Address addr;
};

int main() {
    struct Student s1, s2;

    printf("Enter data for Student 1:\n");
    printf("CGPA: ");
    scanf("%f", &s1.cgpa);

    for (int i = 0; i < 3; i++) {
        printf("Course %d Name: ", i + 1);
        scanf("%s", s1.course[i].name);
        printf("GPA: ");
        scanf("%f", &s1.course[i].gpa);
    }

    printf("Address (street city state zip): ");
    scanf("%s %s %s %d", s1.addr.street, s1.addr.city, s1.addr.state, &s1.addr.zip);

    printf("\nEnter data for Student 2:\n");
    printf("CGPA: ");
    scanf("%f", &s2.cgpa);

    for (int i = 0; i < 3; i++) {
        printf("Course %d Name: ", i + 1);
        scanf("%s", s2.course[i].name);
        printf("GPA: ");
        scanf("%f", &s2.course[i].gpa);
    }

    printf("Address (street city state zip): ");
    scanf("%s %s %s %d", s2.addr.street, s2.addr.city, s2.addr.state, &s2.addr.zip);

    printf("\n--- GPA Comparison ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Course: %s ", s1.course[i].name);

        if (s1.course[i].gpa > s2.course[i].gpa)
            printf("Student 1 has higher GPA\n");
        else if (s1.course[i].gpa < s2.course[i].gpa)
            printf("Student 2 has higher GPA\n");
        else
            printf("Both have equal GPA\n");
    }

    printf("\n--- CGPA Comparison ---\n");
    if (s1.cgpa > s2.cgpa)
        printf("Student 1 has higher CGPA\n");
    else if (s1.cgpa < s2.cgpa)
        printf("Student 2 has higher CGPA\n");
    else
        printf("Both have equal CGPA\n");

    return 0;
}
