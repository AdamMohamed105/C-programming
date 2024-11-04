#include <stdio.h>
#include <stdlib.h>

// Function to write a sentence to "data.txt"
void writeSentence() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(file, "%s", sentence) < 0) {
        perror("Error writing to file");
    } else {
        printf("Sentence written to data.txt\n");
    }

    fclose(file);
}

// Function to read and display content from "data.txt"
void readContent() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;
    printf("Content of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

// Function to append a sentence to "data.txt"
void appendSentence() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char sentence[101];
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(file, "%s", sentence) < 0) {
        perror("Error appending to file");
    } else {
        printf("Sentence appended to data.txt\n");
    }

    fclose(file);
}

int main() {
    // Step 1: Write a sentence to the file
    writeSentence();

    // Step 2: Read and display content from the file
    readContent();

    // Step 3: Append a second sentence to the file
    appendSentence();

    // Step 4: Read and display content again to confirm append
    readContent();

    return 0;
}
