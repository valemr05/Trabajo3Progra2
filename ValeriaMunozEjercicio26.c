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

//se crea la funcion ImprimiZ con dos parámetros de tipo entero, inicio y final
//inicio es el contador de las Z que se van a imprimir
//final es la cantidad de Z que se van a imprimir  
void ImprimirZ( int Inicio, int Final ) 
{
    if ( Inicio <= Final ){
        printf( "Z" );
        ImprimirZ( Inicio + 1, Final );
    }
}

//se crea la funcion ImprimirEspacio con dos parámetros de tipo entero, inicio y final
//inicio es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
void ImprimirEspacio( int Inicio, int Final ) 
{
    if ( Inicio <= Final ) {
        printf( " " );
        ImprimirEspacio( Inicio + 1, Final );
    }
}

//  se crea la funcion SaltoDeLinea debido a la restriccion de solo 4 usos de la funcion printf
void SaltoDeLinea() 
{
    printf( "\n" );
}

//se crea la funcion ImprimirSecuencia con cuatro parámetros de tipo entero, fila, contador, final y finalLetra
//fila es el contador de las filas que se van a imprimir
//contador es el contador de los espacios que se van a imprimir
//final es la cantidad de espacios que se van a imprimir
//finalLetra es la cantidad de letras que se van a imprimir
void ImprimirSecuencia( int Fila, int Contador, int Final, int FinalLetra ) 
{
    if ( Fila <= 10 ) {
        ImprimirEspacio(Contador, FinalLetra);
        ImprimirZ(1, 1);
        ImprimirEspacio( Contador, Final );

        if ( Fila != 10 ){
            ImprimirZ( 1, 1 );
        }
        SaltoDeLinea() ;
        ImprimirSecuencia( Fila + 1, Contador, Final - 2, FinalLetra + 1 );
    }
}

int main() 
{
    ImprimirSecuencia(1, 1, 17, 0);

    return 0;
}
