#include <stdio.h>
#include <string.h>

int main(){
    char palavra[61];
    int contador=0;
    printf("Digite uma palavra: ");
    scanf ("%s", palavra);

    for (int i=0; i<61; i++){
        if (palavra[i]==0){
            break;
        }
        else{
            contador=contador+1;
        }
    }
    printf ("\nA quantidade de letras desta string eh: %d", contador+1);
}