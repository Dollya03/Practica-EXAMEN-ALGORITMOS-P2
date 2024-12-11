#include <stdio.h>

int main(int argc, char *argv[]) {
    int numClientes;
    int edad;
    int TNinos = 0, TAdultos = 0, T3Edad = 0;
    float VTNinos = 0.0, VTAdultos = 0.0, VT3Edad = 0.0, VT = 0.0;

    const float PNino = 3.50;
    const float PAdulto = 7.00;
    const float P3Edad = 3.00;

    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &numClientes);
    if (numClientes>0)
    {
    for (int i = 1; i <= numClientes; i++) {
        printf("Ingrese la edad del cliente %d: ", i);
        scanf("%d", &edad);

        if (edad >= 1 && edad < 12) {
            TNinos++;
            VTNinos = PNino*TNinos;
        } else if (edad >= 12 && edad < 65) {
            TAdultos++;
            VTAdultos = PAdulto*TAdultos;
        } else if (edad >= 65) {
            T3Edad++;
            VT3Edad = P3Edad*T3Edad;
        } else {
            printf("ERROR\n");
        }
    }

    VT = VTNinos + VTAdultos + VT3Edad;

    printf("Total de entradas para ninos: (%.2f$)\n", VTNinos);
    printf("Total de entradas para adultos: (%.2f$)\n", VTAdultos);
    printf("Total de entradas para tercera edad: (%.2f$)\n", VT3Edad);
    printf("TOTAL ENTRADAS: %.2f$\n", VT);
    }
    return 0;
}
