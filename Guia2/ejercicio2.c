#include <stdio.h>

float celcius(int s)
{
    float FA = (s/4)+40;
    float C = (FA-32)*5/9;
    return C;
}

int main()
{
    int S;
    float FA;
    
    printf("ingrese el numero de veces que sonó al chicharra\n");
    scanf("%d",&S);
    
    FA = (S/4)+40;
    float C = celcius(S);
    printf("La temperatura en fahrenheit es %f\n", FA);
    printf("La temperatura en celcius es %f\n", C);
    return 0;
}
