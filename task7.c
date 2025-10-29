#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
  
        for(space = i; space < rows; space++)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
       for(i = 1; i <= rows; i++) {
        for(space = i; space < rows; space++)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("%d",j);
        printf("\n");
    }
    printf("\n");
   for(i = 1; i <= rows; i++) {
        for(space = i; space < rows; space++)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("%c",'A'+j-1);
        printf("\n");
    }


    return 0;
}
