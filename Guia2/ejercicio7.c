#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cad[50];
    int cad2[50]; int cad3[50]; int j = 0; int i = 0; int largo = 0;
       
    printf("ingrese palabra alfanumerica\n");
    scanf("%s",cad);
    for(i = 0; i<sizeof(cad); i=i+2){
        cad2[i] = cad[i]; 
        cad3[i] = cad2[i]-48; 
        while(j < cad3[i]){  
            printf("%c", cad[i+1]);
            j++;
        }
        j=0;   
    }

    printf("\n");
    return 0;
}
