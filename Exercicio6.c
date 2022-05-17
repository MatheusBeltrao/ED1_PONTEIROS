#include <stdio.h>

int main()     
{
    int a=2022,
    b=2023, 
    c=0; 
     printf("\n numero  a: %i", a);
     printf("\n numero b : %i", b);  
    calcular(a,b,c); 
    return 0;
}
int calcular(a,b,c){
    
    a =a*2;
    b =b*2;
    c=a+b;
    
    
    
    
    printf("\n\n O dobro do numero de a e: %d \n O dobro do numero de b e: %d \n a soma deles e: %d",a,b,c);
    return 0;
}