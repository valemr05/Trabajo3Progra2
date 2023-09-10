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

- El siguiente programa imprime en pantalla en el efecto de que una secuencia de A impresas se muevan.
*/

#include <stdio.h>
//Se incluye la librería windows.h para poder usar la funcion Sleep()
#include <windows.h> 

//Se crea la función ImprimirEspacio que imprime espacios recursivamente
//contador es la cantidad de espacios que se van a imprimir
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
int ImprimirA()
{
    printf( "A" );
    return 0;
}

//Se crea la función ImprimirSaltoDeLinea que imprime saltos de linea recursivamente
int ImprimirSaltoDeLinea( int contador )
{
    if( contador > 0 )
    {
        printf( "\n" );
        ImprimirSaltoDeLinea( contador - 1 );
    }

    return 0;
}

//Se crea la función ImprimirEfecto que imprime recursivamente el efecto de la letra A
//contador es la cantidad de veces que se va a imprimir el efecto
//espacioInicial es la cantidad de espacios que se van a imprimir antes de la primera A
//espacioMedio es la cantidad de espacios que se van a imprimir entre las dos A
int ImprimirEfecto( int contador, int espacioInicial, int espacioMedio )
{
    if( contador > 0 ){
        ImprimirEspacio( espacioInicial );
        ImprimirA();
        ImprimirEspacio( espacioMedio );
        ImprimirA();
        //Se utiliza la función Sleep y gran cantidad de saltos de linea para crear el efecto
        Sleep( 500 );
        ImprimirSaltoDeLinea( 60 );
        ImprimirEfecto( (contador - 1), ( espacioInicial + 1 ), ( espacioMedio - 2 ) );
    }
}

int main()
{
    //Se realiza el llamado de la función ImprimirEfecto con los valores iniciales de 40 espacios iniciales y 78 espacios medios
    ImprimirEfecto( 40, 0, 78 );
    return 0;
}