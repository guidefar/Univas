#include <stdio.h>
#include <string.h>

int main(){
    char palavra[61];
    
    printf("Digite uma palavra: ");
    scanf ("%s", palavra);

    printf("\nA palavra em letras maiusculas eh: %s", strupr(palavra));
}