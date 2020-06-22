#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[50];
    int height;
    float marks;
} Student;


int main() {
    char name[50];
    int n, s, i, height;
    float marks;
    Student *pointer;
    
    FILE *file_desc;
    file_desc = fopen("./log.txt", "a");
    if (file_desc == NULL) {
        printf("Error !");
        exit(1);
    }

    printf("Enter the number of students : \n");
    scanf("%d", &n);

    pointer = (Student *) malloc(n * sizeof(Student));

    for (i=0; i<n; i++) {
        fflush(stdin);
        printf("Student %d : \n", i + 1);
        printf("Name : ");
        fgets((pointer + i)->name, sizeof((pointer + i)->name), stdin);
        for (s=0; (pointer + i)->name[s]!='\n'; s++);
        (pointer + i)->name[s] = '\0';
        printf("Height : ");
        scanf("%d", &(pointer + i)->height);
        printf("Marks : ");
        scanf("%f", &(pointer + i)->marks);

        fprintf(file_desc,"\nName: %s, Height: %d, Marks: %f\n", (pointer + i)->name, (pointer + i)->height, (pointer + i)->marks);
    }

    fclose(file_desc);

    printf("Displayng information : \n");
    for(i=0; i<n; i++) {
        printf("%s %d %f\n", (pointer+i)->name, (pointer+i)->height, (pointer+i)->marks);
    }

    return 0;
}