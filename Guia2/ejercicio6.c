#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, contador = 0;
    char cadena[50];
    char caracter;
    printf("ingrese una cadena de caracteres\n");
    gets(cadena);
    printf("ingrese el caracter a encontrar\n");
    scanf("%c",&caracter);
    for(i=0; cadena[i]!='\0'; i++){
        if(cadena[i] == caracter){
            contador++;
        }
    }
    printf("la letra se repite %d veces", contador);

    return 0;
}
