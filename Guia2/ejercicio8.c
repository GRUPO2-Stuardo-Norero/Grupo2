#include <stdio.h>

int main()
{
    int i,c;
    int palnum = 0;
    char trama[40][40];
    char tramac[100] = "7EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F395502560";
    for(i=0;i<length(tramac);i++){
        if(tramac[i]=='7' && tramac[i+1]=='E'){
            c = 0;
            while(c<22){
                trama[palnum][c] = tramac[i+c+2];
                c++;
            }
            palnum++
        }
    }
    printf("%s",tramac[0]);

    return 0;
}
