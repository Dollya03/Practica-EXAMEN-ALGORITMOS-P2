#include <stdio.h>

int main (int argc, char *argv[]) {


/*
desarrollar un programa que me permita gestionar las estadisticas de conductores de 
formula 1 se debe ingresas el numero de conductores de los cuales se va a gestionar 
las estadisticas max 5 conductores por cada conductor se debe ingresar su menor tiempo 
en pista y el mayor tiempo en pista de cada conductor, el tiempo en pits, y su edad
el programa debera mostrar el tiempo más bajo de los tiempos mas bajos entre 
todos los conductores y que nombre el conductor que hizo ese tiempo, asi también debe 
hacer el programa debera mostrar el tiempo más alto de los tiempos mas altos entre 
todos los conductores y que nombre el conductor que hizo ese tiempo, y por ultimo
el programa debera mostrar el tiempo más bajo en pits de los tiempos mas bajos en pits 
entre todos los conductores y que nombre el conductor que hizo ese tiempo en pits, y 
el programa deberá mostrar el promedio de edad de los conductores
*/

float num, max, min; 
for (size_t i = 0; i < 5; i++)
{
    printf("ingrese el num:%d", i+1);
    scanf("%f",&num);
if (i==0)
{
    min=num;
    max=num;
}

}





    return 0;
}