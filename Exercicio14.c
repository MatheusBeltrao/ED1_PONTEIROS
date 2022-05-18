#include <stdio.h> 

void preencherVetor(char *vetor, char elemento) {
	int i = 0;
	while(i<15) {
		*vetor = elemento;
		vetor++;
		i++;
		elemento++;
	} 
}
void imprimirVetor(char *vetor) {
	
	int i;
	for (i=0; i<15; i++) 
		printf("\n[%d]: %c", (i+1), *(vetor+i));

}

int main() {

	char vetor[15], elemento = 'J';
	preencherVetor(vetor, elemento);
	imprimirVetor(vetor);
	
	return 0;
}