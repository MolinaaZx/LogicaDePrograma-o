#include <stdio.h>

int main() {
    int x;
    int soma = 0;
    printf("Digite um valor: ");
    scanf("%d", &x);
    for (int i = 1; i <= (x/2); ++i){
        if (x % i == 0) {
            soma += i;
        }
    }
    printf("%d\n", soma);
    if(soma==x){
        printf("eh perfeito \n");
    }else{
        printf("Nao eh perfeito \n");
    }

    return 0;
}
