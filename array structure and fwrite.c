#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    FILE *file = fopen("students.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to students.bin\n");

    // Reading from the file
    struct Student read_students[n];
    file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(read_students, sizeof(struct Student), n, file);
    fclose(file);

    printf("\nData read from students.bin:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", read_students[i].name, read_students[i].marks);
    }

    return 0;
}
