#include <stdio.h>
#include <string.h>

/*
int main(){
    char palavra[61], palavra1[61], palavra2[61];
    char concatenar;
    printf ("Digite uma palavra: ");
    scanf ("%s", palavra1);
    printf ("Digite outra palavra: ");
    scanf ("%s", palavra2);
    printf ("\nPalavras concatenadas: %s", strcat (palavra1, palavra2));
}*/

char concatenarstrings(char strings1[], char strings2[]){

    printf ("\nPalavras concatenadas: %s", strcat(strings1, strings2));

}
int main(){
    char palavra[61], palavra1[61], palavra2[61];
    char concatenar;
    printf ("Digite uma palavra: ");
    scanf ("%s", palavra1);
    printf ("Digite outra palavra: ");
    scanf ("%s", palavra2);
    concatenarstrings(palavra1, palavra2);
    
}