#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int array[];
	srand(time(NULL));
	for(i=0; i<=255; i++){
		array[i]=rand()%255;
	}
	return 0;
}

