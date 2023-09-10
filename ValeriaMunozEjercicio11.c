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

- El siguiente programa imprime la serie Triangular con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie  triangular son: 1, 3, 6, 10, 15, 21, 28, 36, 45. .
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

// se crea la función SerieTriangular con cuatro parámetros de tipo entero, primerNumero, segundoNumero, contador y terminosTotales para generar la serie Triangular
// primerNumero: es el primer termino de la serie Triangular, se inicializa en 1
// segundoNumero: es el segundo termino de la serie Triangular, se inicializa en 3
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie Triangular que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie Triangular que el usuario desea ver, se inicializa en 0
int SerieTriangular( int primerNumero, int segundoNumero, int contador, int terminosTotales ){
    printf( "%i", primerNumero );
    //se crea la condición para que la serie Triangular no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieTriangular( segundoNumero, ( ( segundoNumero - primerNumero ) + ( segundoNumero + 1 ) ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa imprime la serie de Triangular: Esta serie cuenta el número de puntos en una retícula triangular de\nlado n. Comienza con el número 1 y los siguientes términos se calculan como la suma de los términos\nanteriores y el número de puntos en la diagonal de la retícula de lado n-1. La fórmula para el enésimo\nnúmero de la serie triangular es T(n) = T(n-1) + (n-1)T(n-2), donde T(0) = 1." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Triangular son: ", cantidadDeTerminos );
    SerieTriangular( 1, 3, 1, cantidadDeTerminos );

 return 0; 
 }