#include <stdio.h>
#include <string.h>

int main() {
    char palavra[61];
    char invertido[61];
    int contador = 0, repeticao=0, i=0;
    char letra1, letra2;

    printf("Digite uma palavra: ");
    fgets(palavra, 61, stdin);
    printf ("Digite um caracter a ser substituido: ");
    scanf (" %c", &letra1);
    printf ("Digite um caracter para substituir: ");
    scanf (" %c", &letra2);

    for (int i=0; i<strlen(palavra); i++){
                if (palavra[i]==letra1){
                    palavra[i]=letra2;
                }
        }
    
    printf ("\nO resultado da substituicao das letras eh: %s", palavra);
    }