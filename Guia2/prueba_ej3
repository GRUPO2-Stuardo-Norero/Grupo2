#include <stdio.h> 

#define CHAR_BITS 8
#include <wiringPi.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
int num[255]; int bin[2040]; int N=255; int M=0;
int i = 0; int j = 0; int i2 = 0;
wiringPiSetup();
pinMode(0, OUTPUT);
for (i = 0; i<255; i++){
 num[i] = rand() % (N-M+1) + M;
printf("%d \n",num[i]);
int sup = CHAR_BITS*sizeof(char);
while(sup >= 0){
if(num[i] & (((long int)1) << sup)){
printf("1");
bin[i2] = 1;
i2++;
}
else{
printf("0");
bin[i2] = 0;
i2++;
}
sup--;
}
printf("\n");}
while(j != 4321){
printf("ingrese posicion de vector\n");
scanf("%d",&j);
printf("%d\n",bin[j]);
if(bin[j]==1){
digitalWrite(0,HIGH);}
if(bin[j]==0){
digitalWrite(0,LOW);}
if(bin[j]==4321){
printf("fin del programa \n");
digitalWrite(0,LOW);}
}
return 0;}
