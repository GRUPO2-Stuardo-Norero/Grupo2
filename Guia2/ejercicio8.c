#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,c;
    int palnum = 0;
    char trama[40][40];
    char tramac[200] = "7EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F395502560";
    for(i=0;i<sizeof(tramac);i++){
        if(tramac[i]=='7' && tramac[i+1]=='E'){
            c = 0;
            if(tramac[i+2]=='B' && tramac[i+3]=='3'){
                while(c<21){
                    trama[palnum][c] = tramac[i+c+2];
                    c++;
                }
                palnum++;
            }
            if(tramac[i+2]=='B' && tramac[i+3]=='7'){
                while(c<22){
                    trama[palnum][c] = tramac[i+c+2];
                    c++;
                }
                palnum++;
            }
        }
    }
    for(i=0;i<(sizeof(trama) / sizeof(trama[0]));i++){
        if(trama[i][0]=='B' && trama[i][1]=='3'){
            printf("La temperatura ambiente es: %c%c grados\n",trama[i][17], trama[i][18]);
        }
        if(trama[i][0]=='B' && trama[i][1]=='7'){
            printf("La la humedad es: %c%c%c\n",trama[i][17], trama[i][18], trama[i][19]);
        }
    }
    
   

    return 0;
}
