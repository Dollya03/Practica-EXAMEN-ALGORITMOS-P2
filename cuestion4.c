#include <stdio.h>
int main()
{
    int a, b;
    a= b*b+1;
    printf ("Si b = %d, entonces a= %d \n", b,a);
    b=2;
    a= b*b+1;
    printf ("Si b = %d, entonces a= %d \n", b,a);
    b=-2;
    a= b*b+1;
    printf ("Si b = %d, entonces a= %d \n", b,a);
    return 0;
}