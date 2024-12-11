#include <stdio.h>

int main (int argc, char *argv[]) {
    float n1, n2, result;
    int opc, m1=0, m2=1, m3, n, resultm=0, n1m, n2m;
    double n1p, n2p, resultp;

    printf("elija una opc:\n");
    printf("1)Suma\n");
    printf("2)Resta\n");
    printf("3)Multiplicacion\n");
    printf("4)Division\n");
    printf("5)Serie de Fibonacci\n");
    printf("6)Mult por sumas sucesivas\n");
    printf("7)Potenciacion por mult sucesivas\n");

    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf("Ingrese n1:\n");
        scanf("%f", &n1);
        printf("Ingrese n2:\n");
        scanf("%f", &n2);
        result= n1+n2;
        printf("El resultado de la suma es:%f", result);
        break;
    
    case 2:
        printf("Ingrese n1:\n");
        scanf("%f", &n1);
        printf("Ingrese n2:\n");
        scanf("%f", &n2);
        result= n1-n2;
        printf("El resultado de la resta es:%f", result);
        break;

    case 3:
        printf("Ingrese n1:\n");
        scanf("%f", &n1);
        printf("Ingrese n2:\n");
        scanf("%f", &n2);
        result= n1*n2;
        printf("El resultado de la multiplicacion es:%f", result);
        break;
    case 4:
        printf("Ingrese n1:\n");
        scanf("%f", &n1);
        printf("Ingrese n2:\n");
        scanf("%f", &n2);
        result= n1/n2;
        printf("El resultado de la division es:%f", result);
        break;

    case 5:
        printf("Ingrese numero de elementos para la serie:\n");
        scanf("%d", &n);
        if (n<=1){
            printf("Debe ser un numero mayor a 1\n");
            return 0;
        }
        printf("%d %d", m1, m2);
        for (int i = 1; i < n; i++)
        {
            m3=m1+m2;
            m1=m2;
            m2=m3;
            printf("%d ",m3);
        }
        break;
    
    case 6:
        printf("Ingrese n1: ");
        scanf("%d",&n1m);
        printf("Ingrese n2: ");
        scanf("%d",&n2m);
        if(n2m<0){
        printf("n2 no puede ser negativo: ");
        return 0;
        }
        for (int i = 0; i < n2m; i++)
        {
        resultm = resultm+n1m;
        }
        printf("La multiplicacion es: %d\n",resultm);
        break;
    
    case 7:
        resultp=1;
        printf("Ingrese la base: ");
        scanf("%lf", &n1p);
        printf("Ingrese el exponente: ");
        scanf("%lf", &n2p);
        if (n2p < 0) {
            printf("No deben ser exponentes negativos.\n");
            return 0;
        }
        for (double i = 0; i < n2p; i++)
        {
            resultp *= n1p;
        }
        printf("El resultado de %lf elevado a %lf es: %lf\n", n1p, n2p, resultp);
        break;
    }
    
    return 0;
}