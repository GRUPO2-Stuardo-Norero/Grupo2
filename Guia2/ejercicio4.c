#include <stdio.h>
#include <math.h>

void acutemp(float);
void maxima(float, int);
void minima(float, int);

float act = 0.0;
float max - 99.0;
float min = 99.0;

int hora_max;
int hora_min;

void main(void)
{
    float TEM;
    int I;
    for (I = 1; I <= 24; I++)
    {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
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
