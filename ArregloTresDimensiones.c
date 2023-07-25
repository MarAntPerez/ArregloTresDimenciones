#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int tresDimensiones[3][3];
	int contador = 1;
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		printf("|");
		for(j = 0; j < 3; j++){
			printf("%i", contador);
			contador++;
			printf("|");
		}
		printf("\n");
	}
	
	return 0;
}
