#include <stdio.h>

struct Book {
    int id;
    char title[50];
    float price;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];         // Array of structures
    struct Book *ptr = books;     // Pointer to the first element

    // Input using pointer
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &(*(ptr + i)).id);

        printf("Title: ");
        scanf("%s", (*(ptr + i)).title);

        printf("Price: ");
        scanf("%f", &(*(ptr + i)).price);
    }

    // Output using pointer
    printf("\n--- Book Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("ID    : %d\n", (*(ptr + i)).id);
        printf("Title : %s\n", (*(ptr + i)).title);
        printf("Price : ₹%.2f\n\n", (*(ptr + i)).price);
    }

    return 0;
}
