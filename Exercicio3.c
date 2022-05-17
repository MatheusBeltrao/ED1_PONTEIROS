#include <stdio.h>

int main () {

   int a;
   int b;

   printf("Digite um valor para a: ");
   scanf("%d", &a);
   printf("Digite um valor para b: ");
   scanf("%d", &b);
   printf("\n");
   if (&a > &b) {
       printf("%d A e maior que B", a);
   } else {
       printf("%d B e maior que A", b);

   }

}