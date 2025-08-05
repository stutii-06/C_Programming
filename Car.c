#include <stdio.h>

// Define the structure
struct Car {
    char name[50];
    int year;
    float price;
};

int main() {
    struct Car car1;              // Declare a structure variable
    struct Car *ptr = &car1;      // Pointer to structure

    // Input using pointer
    printf("Enter car name: ");
    scanf("%s", (*ptr).name);  // or ptr->name

    printf("Enter car year: ");
    scanf("%d", &(*ptr).year);

    printf("Enter car price: ");
    scanf("%f", &(*ptr).price);

    // Output using pointer
    printf("\n--- Car Details ---\n");
    printf("Name  : %s\n", (*ptr).name);
    printf("Year  : %d\n", (*ptr).year);
    printf("Price : ₹%.2f\n", (*ptr).price);

    return 0;
}
