#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int m[3][3];
    srand(time(NULL));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m[i][j] = rand()%10;
        }
    }
    int somal = 0;
    int somac = 0;
    for (int i = 0; i < 3; ++i) {
        somal = 0;
        somac = 0;
        for (int j = 0; j < 3; ++j) {
            somal += m[i][j];
            somac += m[j][i];
        }
        printf("Soma da linha: %d\n", somal);
        printf("Soma da coluna: %d\n", somac);

    }

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; ++j) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
