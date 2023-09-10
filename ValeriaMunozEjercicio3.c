/*
- Fecha de publicación: 03/09/2023
- Hora: 6:00 PM
- Versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa imprime la serie de Lucas con la cantidad de terminos ingresada por el usuario.

- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/

#include <stdio.h>

//se crea la función SerieDeLucas con cuatro parámetros de tipo entero, primerNumero, segundoNumero, contador y terminosTotales para generar la serie de lucas
// primerNumero: es el primer termino de la serie de lucas, se inicializa en 2
// segundoNumero: es el segundo termino de la serie de lucas, se inicializa en 1
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de lucas que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de lucas que el usuario desea ver, se inicializa en 0
int SerieDeLucas( int primerNumero, int segundoNumero, int contador, int terminosTotales ){
    printf( "%i", primerNumero );
    //se crea la condición para que la serie de lucas no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDeLucas( segundoNumero, ( primerNumero + segundoNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa presenta la Serie de Lucas: Es similar a la serie de Fibonacci, pero comienza\ncon los números 2 y 1 en lugar de 0 y 1. Es decir, los dos primeros términos de la serie son\n2 y 1, y los siguientes términos se calculan como la suma de los dos términos anteriores.\nLa fórmula para el enésimo número de Lucas es:\nL(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Lucas son: ", cantidadDeTerminos );
    SerieDeLucas( 2, 1, 1, cantidadDeTerminos );

 return 0;
}