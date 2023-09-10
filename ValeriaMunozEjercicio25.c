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

- El siguiente programa imprime una secuencia de letra Z
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

//Se crea la función ImprimirZ que imprime la letra Z
int ImprimirZ( int contador )
{
    if( contador > 0 )
    {
        printf( "Z" );
        ImprimirZ( contador - 1 );
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
//contador es la cantidad de veces que se va a imprimir el efecto
//espacioInicial es la cantidad de espacios que se van a imprimir antes de la primera Z
//zInicial es la Z que se van a imprimir antes de la primera Z
//espacioFinal es la cantidad de espacios que se van a imprimir antes de la segunda Z
//zFinal es la cantidad de Z que se van a imprimir antes de la segunda Z
int ImprimirEfecto( int contador, int espacioInicial, int zInicial, int espacioFinal, int zFinal )
{
    if( contador >= 4 ){
        ImprimirEspacio( espacioInicial );
        ImprimirZ( zInicial );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), ( espacioInicial - 1 ), ( zInicial + 2 ), espacioFinal, zFinal );
    }
    else if( contador > 0 ){
        ImprimirEspacio( espacioFinal );
        ImprimirZ( zFinal );
        ImprimirSaltoDeLinea();
        ImprimirEfecto( (contador - 1), espacioInicial, zInicial, ( espacioFinal + 1 ), ( zFinal - 2 ) );
    }
}

int main()
{
    ImprimirEfecto( 7, 9, 1, 7, 5 );
    return 0;
}