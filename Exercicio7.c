#include<stdio.h>

int somar(int *a, int b){
    *a = *a + b;
}
     int main(){
   
   
   
   
    int A;
    int B;
    printf("Digite os valores de A e B:\n");
    scanf("%i %i",&A,&B);
    somar(&A, B);
    printf("O valor do soma que A recebe e  = %i",A);
}