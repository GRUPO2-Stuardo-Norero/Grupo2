#include <stdio.h>

int verificar(int Categoria, int antiguedad);

int main()
{
	int CAT;
	int ANT;
	int CLA = 1;
	int SAL = 300000;
	int RES = 0;

	printf("Ingrese Categoria: ");
	scanf("%d",&CAT);
	
	printf("Ingrese antiguedad: ");
	scanf("%d",&ANT);

	RES = verificar(CAT, ANT);

	printf("trabajador es: %d \n", RES);

	return RES;
}

int verificar(int Categoria, int antiguedad)
{
	if ((Categoria == 3 || Categoria == 4))
	{
		if (antiguedad > 5)
			return 1;
	}
	else if (Categoria == 2)
	{
		if (antiguedad > 7)
			return 1;
	}

	return 0;
}
