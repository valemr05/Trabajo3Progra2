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

//Se crea la función ImprimirEspacio que imprime espacios recursivamente
int ImprimirEspacio( int contador )
{
    if( contador > 0 )
    {
        printf( " " );
        ImprimirEspacio( contador - 1 );
    }

    return 0;
}

//Se crea la función ImprimirA que imprime la letra A
int ImprimirA( int contador )
{
    if( contador > 0 )
    {
        printf( "A" );
        ImprimirA( contador - 1 );
    }

    return 0;
}

//Se crea la función ImprimirSaltoDeLinea que imprime un salto de linea
int ImprimirSaltoDeLinea()
{
    printf( "\n" );
    return 0;
}

//Se crea la función ImprimirEfecto que imprime recursivamente el efecto de la letra Z
int ImprimirEfecto( int contador, int espacioInicial, int aInicial, int espacioFinal, int aFinal )
{
    if( contador >= 6 ){
        ImprimirEspacio( espacioInicial );
        ImprimirA( aInicial );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), ( espacioInicial - 1 ), ( aInicial + 1 ), espacioFinal, aFinal );
    }
    else if( contador > 0 ){
        ImprimirEspacio( espacioFinal );
        ImprimirA( aFinal );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), espacioInicial, aInicial, ( espacioFinal + 1 ), ( aFinal - 1 ) );
    }
}

int main()
{
    ImprimirEfecto( 11, 39, 1, 35, 5 );
    return 0;
}