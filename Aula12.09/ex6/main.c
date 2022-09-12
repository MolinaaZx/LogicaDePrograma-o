#include <stdio.h>
#include <string.h>

int main() {
    int escolha = 2;
    scanf("%d", &escolha);
    while (!(escolha != 0 || escolha != 1)){
        printf("Inverter a palavra[0]\nSaber se ela é palindroma[1]");

    }

    while(escolha == 0){

        char palavras[3][41];

        for(int vez; vez < 3;vez++){
            printf("digite a palavra\n");
            gets(palavras[vez]);

        }

        for (int i = 0; i < 3; ++i) {
            puts(strrev(palavras[i]));
        }
        return 0;
    }

    while(escolha == 1){
        char palavra[41],invertida[41];
        printf("Digite uma palavra");
        gets(palavra);
        strcpy(palavra,invertida);
        strcmp(palavra, strrev(invertida));


    }

}
