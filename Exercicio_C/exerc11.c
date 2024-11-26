#include <stdio.h>
#include <string.h>

int main() {
    char frase[250];
    char palavras[50][50];
    int i=0;

    printf("Digite uma frase: ");
    fgets(frase, 250, stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    char *palavra = strtok(frase, " ");
    
    while (palavra != NULL) {
        strcpy(palavras[i], palavra);
        i++;
        palavra = strtok(NULL, " ");
    }

    printf("\nAs palavras separadas sao:\n");
    for (int j = 0; j < i; j++) {
        printf("%s\n", palavras[j]);
    }
}