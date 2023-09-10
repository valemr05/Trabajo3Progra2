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

- El siguiente programa imprime el factorial del numero ingresado 
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/

#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo entero, numero
int Factorial( int numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}//fin de la función Factorial

//se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    if ( numero < 0 )
    {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
        ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo
    }//de lo contrario
    else
    {
        printf( "El factorial de %i es: %i", numero, Factorial( numero ) );

    }//fin del if

    return 0;
}//fin de la función ValidarNumero

int main()
{
    int numero=0;//se crea la variable numero de tipo entero con un valor conocido

    printf( "El siguiente programa lee un número entero positivo e imprime su factorial, siendo:\nN! = 1 x 2 x 3 x 4 x ... N\nN! = 1 si N = 0\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario

    ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo

    return 0;
}