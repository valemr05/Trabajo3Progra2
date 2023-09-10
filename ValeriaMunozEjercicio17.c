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

- El siguiente programa imprime la secuencia de una pareja de enteros.
*/


#include <stdio.h>
// La función ParejaEnteros imprime la secuencia de una pareja de enteros.
// fila1: es el primer numero de la pareja de enteros.
// fila2: es el segundo numero de la pareja de enteros.
// contadorfila2: es el contador del segundo numero de la pareja de enteros.
int ParejaEnteros( int fila1, int fila2, int contadorfila2 ){
    if( fila1 <= 9 ){
        if ( contadorfila2 < 2 ){
            printf( "%i %i\n", fila1, fila2 );
            ParejaEnteros( fila1 + 1 , fila2 , contadorfila2 + 1 );
        }
        else{
            printf( "%i %i\n", fila1, fila2 );
            ParejaEnteros( fila1 + 1 , fila2 + 1 , contadorfila2 - 1 );
        }
    }
    else{
           return 0;
    }
}

int  main(){
    printf( "Parejas de enteros: \n" );
    ParejaEnteros( 0, 1, 1 );
}