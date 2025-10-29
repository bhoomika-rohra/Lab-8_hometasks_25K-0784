#include <stdio.h>
int main() {
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}};
    int inverted[4][4];
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (image[i][j] == 1){
                count++;
            }    
            inverted[i][j] = 1 - image[i][j];
        }
    }
    printf("Original\t\tInverted\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            printf("%d ", image[i][j]);
        }    
        printf("\t\t");
        for (int j = 0; j < 4; j++){
            printf("%d ", inverted[i][j]);
        }    
        printf("\n");
    }
    printf("\nNumber of white pixels: %d\n", count);
    return 0;
}
