#include <stdio.h>
#include <string.h>

int main() {
    char palavra[61];
    char invertido[61];
    int i = 0, j = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 61, stdin);  

    while (palavra[i] != '\0' && palavra[i] != '\n') {
        i++;
    }
    palavra[i] = '\0';  

    for (j = 0, i = strlen(palavra) - 1; i >= 0; i--, j++) {
        invertido[j] = palavra[i];
    }
    invertido[j] = '\0'; 

    printf("\nInverso: %s", invertido);

}