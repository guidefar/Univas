#include <stdio.h>
#include <string.h>

int main() {
    char palavra[61];
    char invertido[61];
    int contador = 0, repeticao=0, i=0;
    char letra;

    printf("Digite uma palavra: ");
    fgets(palavra, 61, stdin);
    printf ("Digite um caracter de ocorrencia: ");
    scanf ("%c", &letra);

    while (palavra[i] != '\0' && palavra[i] != '\n') {
        i++;
    }
    palavra[i] = '\0';

    for (int i=0; i<strlen(palavra); i++){
                if (palavra[i]==letra){
                    contador = contador + 1;
                }
        }
    
    printf ("\nA letra '%c' aparece %d vez(es) na palavra digitada.", letra, contador);
    }
    