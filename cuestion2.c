#include <stdio.h>
int main () {
   int a = 100;
   if( a == 10 ) {
      printf("Valor de a es 10\n" );
   }
   else if( a == 20 ) {
      printf("VValor de a es  20\n" );
   }
   else if( a == 30 ) {
      printf("Valor de a es  30\n" );
   }
   else {
      printf("Ningun valor\n" );
   }
   printf("El valor exacto de a es : %d\n", a );
   return 0;
}
