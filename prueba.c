#include <stdio.h>

// Función Letra
void Letra(int Inicio, int Final) {
    if (Inicio <= Final) {
        printf("Z");
        Letra(Inicio + 1, Final);
    }
}

// Función Espacio
void Espacio(int Inicio, int Final) {
    if (Inicio <= Final) {
        printf(" ");
        Espacio(Inicio + 1, Final);
    }
}

// Función Imprimir
void Imprimir(int Fila, int Contador, int Final, int FinalZ) {
    if (Fila <= 10) {
        // Llamada a Espacio con los argumentos correspondientes
        Espacio(Contador, FinalZ);

        // Llamada a Letra con los argumentos correspondientes
        Letra(1, 1);

        // Llamada a Espacio con los argumentos correspondientes
        Espacio(Contador, Final);

        if (Fila != 10) {
            // Llamada adicional a Letra con los argumentos correspondientes
            Letra(1, 1);
        }

        printf("\n");

        // Llamada recursiva a Imprimir con los argumentos correspondientes
        Imprimir(Fila + 1, Contador, Final - 2, FinalZ + 1);
    }
}

int main() {
    // Llamada inicial a la función Imprimir
    Imprimir(1, 1, 17, 0);

    return 0;
}
