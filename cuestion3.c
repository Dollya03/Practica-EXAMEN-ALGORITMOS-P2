#include <stdio.h>
int main()
{
    int a, b,c;
    printf ("Ingrese 3 numeros->");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    a=b;
    b=c;
    c=a;
    printf("El resultado es %d  %d %d\n", a,b,c);
    return 0;
}