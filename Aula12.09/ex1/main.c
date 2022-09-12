#include <stdio.h>
#include <stdlib.h>
int main() {
    int soma=0;
    int x[10];
    for (int i = 0; i < 10; ++i) {
        printf("Digite um valor: \n");
        scanf("%d", &x[i]);
        soma += x[i];
    }
        int cont=0;
        double media = soma/10.0;
        for (int i = 0; i < 10; ++i)
        {
            if(x[i] < media);
            cont++;
        }
    }
for (int i = 0; i <10; ++i) {
    printf("[%d]", x[i]);
    printf("Qtd de valores abaixo da media: %d \n", cont);


    return 0;
}
