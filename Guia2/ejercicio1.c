#include <stdio.h>

int main()
{
	int CAT;
	int ANT;
	int CLA = 1;
	int SAL = 300000;
	int RES = 0;

	printf("Ingrese Categoria: ");
	scanf(% CAT);

	printf("Ingrese antiguedad: ");
	scanf(% ANT);

	RES = verificar(CAT, ANT);

	printf("trabajador es: %d", RES);

	return RES;
}

boolean verificar(int Categoria, int antiguedad)
{
	if ((Categoria == 3 || Categoria == 4))
	{
		if (antiguedad > 5)
			return true;
	}
	else if (Categoria == 2)
	{
		if (antiguedad > 7)
			return true;
	}

	return false;
}