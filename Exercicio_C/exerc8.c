#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[61];
    char invertido[61];
    char substituicao;
    int i = 0, j = 0;
    int espaco;

    printf("Digite uma palavra: ");
    fgets(palavra, 61, stdin);

    while (palavra[i] != '\0' && palavra[i] != '\n') {
        i++;
    }
    palavra[i] = '\0';

    while (palavra[i] == ' ' || palavra[i] == '\t') {
        i++;
    }
    int final = strlen(palavra);

    while (final >= i && (palavra[final] == ' ' || palavra[final] == '\t')) {
        final--;
    }

    for (int j = i; j <= final; j++) {
        palavra[i++] = palavra[j];
    }
    palavra[i] = '\0';

    printf("\nA palavra sem espacos no inicio e final eh: %s", palavra);
    }