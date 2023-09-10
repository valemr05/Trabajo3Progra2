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

- El siguiente programa imprime la tabla de multiplicar desde el 1 hasta el 10.
*/

#include <stdio.h>

// La función TablasMultiplicar imprime la tabla de multiplicar desde el 1 hasta el 10.
// filas: es el numero de filas ( primer numero) de la tabla de multiplicar.
// columnas: es el numero de columnas (segundo numero) de la tabla de multiplicar.
int TablasMultiplicar( int filas, int columnas ){
    if( filas<= 10 ){
       if ( columnas <= 10 ){
         printf( "%i x %i = %i\n", filas, columnas, filas*columnas );
         TablasMultiplicar( filas, columnas + 1 );
        }
        else{
        printf( "\n" );
        TablasMultiplicar( filas + 1, 1 );
        }
    return 0;
    }
}

int main(){
printf( "Tablas de multiplicar: \n" );
TablasMultiplicar( 1, 1 );

}
