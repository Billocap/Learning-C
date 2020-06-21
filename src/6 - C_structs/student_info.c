//Display information about a student.
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[50];
    int roll;
    float marks;
} Student;

void main() {
    int n, i, s;
    Student *pointer;
    printf("Type the amount of students : \n");
    scanf("%d", &n);

    pointer = (Student *) malloc(n * sizeof(Student));

    for (i=0; i<n; i++) {
        fflush(stdin);
        printf("Enter the data for student %d : \n", i + 1);
        printf("First name : ");
        fgets((pointer+i)->name, sizeof((pointer+i)->name), stdin);
        printf("Roll : ");
        scanf("%d", &(pointer+i)->roll);
        printf("Marks : ");
        scanf("%f", &(pointer+i)->marks);
    }
    
    printf("Displayng information : \n");
    for (i=0;i<n;i++) {
        for (s=0;(pointer+i)->name[s]!='\n';s++);
        (pointer+i)->name[s] = '\0';

        printf("%s %d %f\n", (pointer+i)->name, (pointer+i)->roll, (pointer+i)->marks);
    }
}