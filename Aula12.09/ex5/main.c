#include <stdio.h>

int main() {
    double total;
    double nGrao = 1;

    for(int nTabuleiro = 0; nTabuleiro < 64;nTabuleiro++){
        printf("Casa %d Quantidade de Graos: %.0f\n",nTabuleiro+1,nGrao);
        nGrao *= 2;
        total += nGrao;
    }

    printf("total de Graos: %.0f\n",total);
    return 0;
}
