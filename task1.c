#include <stdio.h>
int main(){
int class[3][4]={{85, 92, 78, 90}, {88, 76, 95, 84}, {90, 85, 88, 92}};
    int total[3]={0};
    float avg[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            total[i]=total[i]+class[i][j];
            
        }
        avg[i]=total[i]/4.0;
    }
    for (int i = 0; i < 3; i++) {
        printf("Class %d Average: %.2f\n", i + 1, avg[i]);
    }

    return 0;
}
