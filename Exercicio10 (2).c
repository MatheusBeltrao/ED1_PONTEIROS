#include <stdio.h>

int main() {
 
  int valores[5];

  int *ptr_valores = valores;

  for(int i = 0; i < 5; ++i) {
    printf("Insira um número: ");
    scanf("%d", ptr_valores);

    
    ++ptr_valores;
  }

 
  ptr_valores = valores;

  for(int i = 0; i < 5; ++i) {
  
    printf("%d\n", (*ptr_valores) * 2);

    ++ptr_valores;
  }
}