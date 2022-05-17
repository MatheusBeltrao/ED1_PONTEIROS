#include <stdio.h>

int main()
{
    int a = 5;
    float v = 2.1;
    char c ='a';
    
    int *ponteiroint = &a;
    float *ponteirofloat = &v;
    char  *ponteirochar = &c;
    
    printf("Valores passados:\n");
    printf("%i ", *ponteiroint);
    printf("\n%f",  *ponteirofloat);
    printf("\n%c", *ponteirochar);
    
    printf("\n\n");
    
   *ponteiroint = 2022;
   *ponteirofloat = 2022.1;
   *ponteirochar = 'v';

    printf("Valores apos a modificacao:\n");
    printf("%i ", *ponteiroint);
    printf("\n%f",  *ponteirofloat);
    printf("\n%c", *ponteirochar);

}