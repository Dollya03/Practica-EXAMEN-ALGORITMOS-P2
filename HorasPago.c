#include <stdio.h>
int main (int argc, char *argv[]) {

float horasN = 0.0, horasS = 0.0, horasE = 0.0;
float pagoN1 = 0.0, pagoS1 = 0.0, pagoE1 = 0.0, pagoT = 0.0;
int opc, opc2;
const float pagoN = 5.0;
const float pagoS = 7.5;
const float pagoE = 10.0;

    printf("Ingrese horas normales trabajadas:\n ");
    scanf("%f", &horasN);
    printf("existen horas suplementarias trabajadas? 1)Si 2)No\n");
    scanf("%d", &opc2);
    if (opc2==1)
    {
    printf("Ingrese horas suplementarias trabajadas:\n ");
    scanf("%f", &horasS);
    }
    printf("existen horas extraordinarias trabajadas? 1)Si 2)No\n");
    scanf("%d", &opc2);
    if (opc2==1)
    {
    printf("Ingrese horas extraordinarias trabajadas:\n ");
    scanf("%f", &horasE);
    }
    if (horasN > 0) {
    pagoN1 = horasN * pagoN;
    printf("Pago por horas normales: %.1f horas a %.2f$ =%.2f$\n", horasN, pagoN, pagoN1);
    } else {
    printf("No hay horas normales trabajadas.\n");
    }
    if (horasS > 0) {
    pagoS1 = horasS * pagoS;
    printf("Pago por horas suplementarias: %.1f horas a %.2f$ =%.2f$\n", horasS, pagoS, pagoS1);
    } else {
    printf("No hay horas suplementarias trabajadas.\n");
    }
    if (horasE > 0) {
    pagoE1 = horasE * pagoE;
    printf("Pago por horas extraordinarias: %.1f horas a %.2f$= %.2f$\n", horasE, pagoE, pagoE1);
   } else {
    printf("No hay horas extraordinarias trabajadas.\n");
   }
    pagoT = pagoN1 + pagoS1 + pagoE1;
   if (pagoT > 0) {
   printf("Pago total: %.2f$\n", pagoT);
   } else {
    printf("No se ingresaron horas trabajadas, no hay pago.\n");
    }
    return 0;
}