#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
#include <math.h>

void Acutem(float);
void Maxima(float, int);
void Minima(float, int);

float ACT = 0.0;
float MAX = -99.0;
float MIN = 99.0;

int HMAX;
int HMIN;

void main(void)
{
    float TEM;
    int I;
    int N = 50;
    int M = -50;
    for (I = 1; I <= 24; I++)
    {
	   TEM = rand() %(N-M+1) + M;   // Este entrega M y N
	    
	    printf("\nTEM%d= %.2f", I,TEM);
	    
        Acutem(TEM);
        Maxima(TEM, I);
        Minima(TEM, I);
    }
    printf("\nPromedio del dia: % 5.2f", (ACT / 24));
    printf("\nMaxima del dia: % 5.2f \tHora: % d", MAX, HMAX);
    printf("\nMínima del dia: % 5.2f \tHora: % d", MIN, HMIN);
}
void Acutem(float T)
{
    ACT += T;
}

void Maxima(float T, int H)
{
    if (MAX < T)
    {
        MAX = T;
        HMAX = H;
    }
}

void Minima(float T, int H)
{
    if (MIN > T)
    {
        MIN = T;
        HMIN = H;
    }
}