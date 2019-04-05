#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    char salida[50];
    printf("Ingrese la cadena de numeros y letras\n");
    getc(cadena);
    for(i=0;cadena[i]!='\0';i++){
        val = atoi(cadena[i]);
        i++;
        character = cadena[i];
        for(j=0;j<val;j++){
            printf("%c",character);
        }
    }
        

    return 0;
}
