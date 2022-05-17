 #include <stdio.h>

int main (){
 
    int a = 2;
    int b = 3;

    if (&a > &b)
      {
	    printf ("o endereço de A e maior que e o B\n");
	        return;
      }
    printf ("o endereço de B e maior que e o A\n");
  
}