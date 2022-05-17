 #include <stdio.h>

int main (){
 
    int a = 2;
    int b = 3;

    if (&a > &b)
      {
	    printf ("a tem o maior endereco de memoria\n");
	        return;
      }
    printf ("b tem o maior endereco de memoria\n");
  
}