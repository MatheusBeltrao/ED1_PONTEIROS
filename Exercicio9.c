#include <stdio.h>

int main() {
    
	float matriz[3][3] = {{1,2, 3}, {4, 5, 6}, {7, 8, 9}};
	int a, b;
	
	printf("Endereço das posicoes de uma matriz [3][3]:\n\n");
	for (a=0; a<3; a++) {
		for (b=0; b<3; b++){
			printf("%d\n", &matriz[a][b]);
          	}	
	
		}
	return 0;
}