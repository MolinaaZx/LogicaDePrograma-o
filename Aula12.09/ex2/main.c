#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    for (int i = 2; i < num; ++i) {
        if(num % 2 ==0){
            printf("Numero nao eh primo \n");
            return 0;
        }
    }
    printf("eh primo\n");
    return 0;
}
