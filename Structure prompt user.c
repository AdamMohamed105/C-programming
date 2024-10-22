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
    printf("Enter the title of the book:");
    scanf("%s", name1.Title);  // No & for strings

    printf("Enter the name of the author:");
    scanf("%s", name1.Author);  // No & for strings

    printf("Enter the publication year:");
    scanf("%d", &name1.Publication_year);

    printf("Enter ISBN:");
    scanf("%s", name1.ISBN);

    printf("Enter the price:");
    scanf("%f", &name1.Price);  // Correct format specifier for float

    printf("Title: %s\n", name1.Title);
    printf("Author: %s\n", name1.Author);
    printf("Publication year: %d\n", name1.Publication_year);
    printf("ISBN: %s\n", name1.ISBN);
    printf("Price: %.2f\n", name1.Price);

    return 0;
}