void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int A = 2022, B= 10;
    printf("Antes da modificacao:\n");
    printf("A: %d\tB: %d\n", A, B);
    troca(&A, &B);
    printf("Depois da modificacao:\n");
    printf("A: %d\tB: %d\n", A, B);

    return 0;
}