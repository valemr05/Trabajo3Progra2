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

- El siguiente programa imprime una secuencia de letras A 
*/

#include <stdio.h>

//se crea la función ImprimirA con dos parámetros de tipo entero, inicio y final
int ImprimirA( int inicio, int final )
{
    if ( inicio <= final ){
        printf( "A" );
        ImprimirA( ( inicio + 1 ), final );
    }//fin del if
}//fin de la función ImprimirA

//se crea la función ImprimirEspacios con dos parámetros de tipo entero, inicio y final para imprimir los espacios al inicio de cada columna
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

//se crea la función Imprimir con cuatro parámetros de tipo entero, fila, contador, final y cantidadEspacios
//fila es el contador de las filas que se van a imprimir
//contador es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
//cantidadEspacios es la cantidad total de espacios que se van a imprimir
int Imprimir( int fila, int contador, int final, int cantidadEspacios )
{
    if ( fila <= 3 ){ //para las 3 primeras columnas
        ImprimirEspacios( 1, 27 );
        ImprimirA( contador, final );
        ImprimirEspacios( contador, cantidadEspacios );
        ImprimirA( contador, final );
        SaltoDeLinea();
        Imprimir( ( fila + 1 ), contador, ( final + 1 ), ( cantidadEspacios - 2 ) );
    }//de lo contrario
    else if ( fila <= 4 ){//para la columna 4
        ImprimirEspacios( 1, 27 );
        ImprimirA( 1, 7 );
        SaltoDeLinea();
        Imprimir( ( fila + 1 ), contador, ( final - 1 ), ( cantidadEspacios + 2 ) );
    }//de lo contrario
    else if( fila <= 7 ){//para las 3 ultimas columnas
        ImprimirEspacios( 1, 27 );
        ImprimirA( contador, final );
        ImprimirEspacios( contador, cantidadEspacios );
        ImprimirA( contador, final );
        SaltoDeLinea();
        Imprimir( ( fila + 1 ), contador, ( final - 1 ), ( cantidadEspacios + 2 ) );
    }//fin del if

}//fin de la función Imprimir

int  main()
{
    Imprimir( 1, 1, 1, 5 );//se llama a la función Imprimir con los valores iniciales de la fila = 1, el contador = 1, el final = 7, la cantidad de letras = 13 y el codigo ASCII de la letra = 82
    
    return 0;
}