#include <stdio.h>

int main() {
    int i, j, rows, count;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        count = 2 * i - 1;

        for(j = i; j < rows; j++) {
            printf("  ");
        }
        for(j = 1; j <= count; j++) {
            printf("* ");
        }

        printf(" | ");

        for(j = i; j < rows; j++) {
            printf("  ");
        }
        for(j = 1; j <= count; j++) {
            printf("%d ", j);
        }

        printf(" | ");

        for(j = i; j < rows; j++) {
            printf("  ");
        }
        for(j = 1; j <= count; j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
