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

- El siguiente programa imprime una secuencia de letras Z
*/

#include <stdio.h>

//se crea la función ImprimirZ con dos parámetros de tipo entero, inicio y final
int ImprimirZ( int inicio, int final )
{
    if ( inicio <= final ){
        printf( "Z" );
        ImprimirZ( ( inicio + 1 ), final );
    }//fin del if
}//fin de la función ImprimirA

//se crea la función ImprimirEspacios con dos parámetros de tipo entero, inicio y final para imprimir los espacios de cada columna
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

//se crea la función Imprimir con cinco parámetros de tipo entero, fila, contador, final, cantidadEspacios y finalEspacios
//fila es el contador de las filas que se van a imprimir
//contador es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
//cantidadEspacios es la cantidad total de espacios que se van a imprimir
//finalEspacios es la cantidad de espacios que se van a imprimir al final de cada fila
int Imprimir( int fila, int contador, int final, int cantidadEspacios, int finalEspacios )
{
    if ( fila <= 10 ){ 
        ImprimirEspacios( contador, final );
        ImprimirZ( 1, 1 );
        ImprimirEspacios( cantidadEspacios, finalEspacios );
        if ( fila > 1 ){ ImprimirZ( 1, 1 ); }//fin del if
        SaltoDeLinea();
        Imprimir( ( fila + 1 ), contador, ( final - 1 ), cantidadEspacios, ( finalEspacios + 2 ) );
    }//fin del if

}//fin de la función Imprimir

int  main()
{
    Imprimir( 1, 1, 9, 2, 0 );//se llama a la función Imprimir con los valores iniciales de la fila = 1, el contador = 1, el final = 9, inicioEspacios = 2 y finalEspacios = 0
    
    return 0;
}