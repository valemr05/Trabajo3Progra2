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

- El siguiente programa imprime una secuencia de letras p 
*/

#include <stdio.h>

//se crea la función ImprimirP con dos parámetros de tipo entero, inicio y final
//inicio es el contador de las P que se van a imprimir
//final es la cantidad de P que se van a imprimir
int ImprimirP( int inicio, int final )
{
    if ( inicio <= final ){
        printf( "P" );
        ImprimirP( ( inicio + 1 ), final );
    }//fin del if
}//fin de la función ImprimirP

//se crea la función ImprimirEspacios con dos parámetros de tipo entero, inicio y final
//inicio es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
int ImprimirEspacios( int inicio, int final )
{
    if ( inicio <= final ){
        printf( " " );
        ImprimirEspacios( inicio, ( final - 1 ) );
    }//fin del if
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
int SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

//se crea la función Imprimir con cuatro parámetros de tipo entero, fila, contador, final y finalP
//fila es el contador de las filas que se van a imprimir
//contador es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
//finalP es la cantidad de letras que se van a imprimir
int Imprimir( int fila, int contador, int final, int finalP )
{
    if ( fila <= 7 ){ 
        ImprimirEspacios( contador, final );
        ImprimirP( contador, finalP );
        SaltoDeLinea();
        Imprimir( ( fila + 1 ), contador, ( final + 1 ), ( finalP - 2 ) );
    }//fin del if

}//fin de la función Imprimir

int  main()
{
    Imprimir( 1, 1, 0, 13 );
    return 0;
}