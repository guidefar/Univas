#include <stdio.h>
#include <strings.h>

int main(){
    char palavra[61], palavra1[61], palavra2[61];

    printf ("Digite uma palavra: ");
    scanf ("%s", palavra1);
    printf ("Digite outra palavra: ");
    scanf ("%s", palavra2);

    printf ("\nAs palavras digitadas sao:\n%s\n%s", palavra1, palavra2);
}