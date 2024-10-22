#include <stdio.h>
#include <string.h>

struct book {
    char Title[30];
    char Author[30];
    int Publication_year;
    char ISBN[13];
    float Price;
} name1, name2;

int main() {
    strcpy(name1.Title, "Introduction to C program");
    strcpy(name1.Author, "John Smith");
    name1.Publication_year = 2022; 
    strcpy(name1.ISBN, "9780131103627");
    name1.Price = 49.99;  

    printf("Title: %s\n", name1.Title);
    printf("Author: %s\n", name1.Author);
    printf("Publication year: %d\n", name1.Publication_year);
    printf("ISBN: %s\n", name1.ISBN);
    printf("Price: %.2f\n", name1.Price);

    return 0;
}
