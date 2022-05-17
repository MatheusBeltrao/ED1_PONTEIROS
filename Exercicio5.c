#include <stdio.h>

int troca(int *a, int *b){

int aux;

   if(*b > *a) {
       aux = *b;
       *b = *a;
       *a = aux;
   }
}
int main(){

   int n1;
   int n2;
 
  
   printf("Digite o valor  1: ");
   scanf("%d", &n1);
   printf("digite o valor 2: ");
   scanf("%d", &n2);
        troca(&n1,&n2);
   printf("\n maior numero: %d",n1);
   printf("\n menor numero: %d",n2);
 
 
 
 
   return 0;
}