#include <stdio.h>

int main() {
    int i, j, rows;

    // Get a valid number of rows
    do {
        printf("Enter number of rows (positive integer): ");
        scanf("%d", &rows);
        if (rows <= 0) {
            printf("Please enter a positive number.\n");
        }
    } while (rows <= 0);

    // Generate pattern
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
