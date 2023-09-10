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

- El siguiente programa imprime una secuencia de letras

*/

#include <stdio.h>

//se crea la función ImprimirLetras con dos parámetros de tipo entero, inicio y final, para imprimir las letras segun su codigo ASCII
int ImprimirLetras( int inicio, int final, int ascii )
{
    if ( inicio <= final ){
        printf( "%c", ( ascii - 2 ) );
        ImprimirLetras( ( inicio + 1 ), final, ascii );
    }//fin del if
}//fin de la función ImprimirLetras

//se crea la función ImprimirLetras con dos parámetros de tipo entero, inicio y final para imprimir los espacios al inicio de cada columna
int ImprimirEspacios( int inicio, int final )
{
    if ( inicio <= final ){
        printf( " " );
        ImprimirEspacios( inicio, ( final - 1 ) );
    }//fin del if
}//fin de la función ImprimirEspacios

//se crea la función ImprimirEsp con dos parámetros de tipo entero, contador y final
int Imprimir( int fila, int contador, int final, int cantidadLetras, int ascii )
{
    if ( fila <= 7 ){
        ImprimirEspacios( contador, final );
        ImprimirLetras( contador, cantidadLetras, ascii );
        printf( "\n" );
        Imprimir( ( fila + 1 ), contador, ( final + 1 ), ( cantidadLetras - 2 ), ( ascii - 2 ) );
    }//fin del if
}//fin de la función Imprimir

int  main()
{
    Imprimir( 1, 1, 0, 13, 82 );//se llama a la función Imprimir con los valores iniciales de la fila = 1, el contador = 1, el final = 7, la cantidad de letras = 13 y el codigo ASCII de la letra = 82
    
    return 0;
}