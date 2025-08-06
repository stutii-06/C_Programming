#include <stdio.h>
#include <string.h>

struct review {
    char reviewer_name[100];
    int ratings;
};

struct book {
    char title[100];
    char author[100];
    struct review revs[10];
    int reviewcount;
};

float avg_rating(struct book *books) {
    float sum = 0.0;
    for (int i = 0; i < books->reviewcount; i++) {
        sum += books->revs[i].ratings;
    }
    return books->reviewcount > 0 ? sum / books->reviewcount : 0.0;
}

int main() {
    struct book b;

    printf("Enter title: ");
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    printf("Enter number of reviews: ");
    scanf("%d", &b.reviewcount);
    getchar(); // Consume leftover newline after scanf

    for (int i = 0; i < b.reviewcount; i++) {
        printf("Reviewer name: ");
        fgets(b.revs[i].reviewer_name, sizeof(b.revs[i].reviewer_name), stdin);
        b.revs[i].reviewer_name[strcspn(b.revs[i].reviewer_name, "\n")] = '\0';

        printf("Rating out of 5: ");
        scanf("%d", &b.revs[i].ratings);
        getchar(); // Consume newline after integer input
    }

    float avg = avg_rating(&b);
    printf("\nBook: %s by %s\n", b.title, b.author);
    printf("Average rating: %.2f\n", avg);

    return 0;
}

