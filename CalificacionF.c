#include <stdio.h>

int main (int argc, char *argv[]) {

/*
1. Un estudiante desea saber cuál será su calificación final en la materia de
programación. Dicha calificación se compone de los siguientes
porcentajes: a. 55% del promedio de sus tres notas parciales b. 30% de la
calificación del examen final c. 15% de la calificación de un trabajo final.
*/

float prom, n1, n2, n3, examenf, trabajof;
float result1, result2, result3, CalificacionF; 
int asist;

printf("escriba la nota parcial 1: ");
scanf("%f", &n1);
printf("escriba la nota parcial 2: ");
scanf("%f", &n2);
printf("escriba la nota parcial 3: ");
scanf("%f", &n3);
printf("escriba la nota del examen final: ");
scanf("%f", &examenf);
printf("escriba la nota del trabajo final: ");
scanf("%f", &trabajof);
printf("escriba la asistencia: ");
scanf("%d", &asist);

prom=(n1+n2+n3)/3;
result1= prom*0.55;
result2= examenf*0.30;
result3=trabajof*0.15;
CalificacionF= result1+result2+result3;
printf("La calificacion final de programacion es: %f\n", CalificacionF);

if (CalificacionF>=6)
{
    printf("Aprueba\n");
}else if (asist>=80 )
{
    printf("Puede recuperar\n");
 }
else {
    printf("Reprueba\n");
}
    return 0;
}