#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <wiringPiSPI.h>



int main(){

	if (wiringPiSPISetup (0,1000000) < 0)
	{
		fprintf (stderr, "Unable to open SPI Driver 0; %s\n", strerror (errno));
		exit (1);
	}
	int ce = 1;
	unsigned char dato[4];

	wiringPiSPIDataRW(ce, dato, 2);

	printf("dato = %02X", dato);

	return 0;

}
