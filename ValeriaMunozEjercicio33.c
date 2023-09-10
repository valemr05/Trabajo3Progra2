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

- El siguiente programa imprime la serie Ln de taylor.
- Salvedades: El programa admite valores ingresados de tipo entero para n y flotante x, para valores de otro tipo no garantizamos sus resultados.
*/

#include <stdio.h>
#include <math.h>

//se crea la función SerieLn con dos parámetros de tipo entero, n para el numero de terminos y x para el valor al cual le hayamos el Ln
float SerieLn( int n, float x )
{   //se usa resividad de cola para calcular la serie de Taylor de la funcion Ln
    if( n == 1 )
    {
        return ( x - 1 );
    }
    else
    {
        return( ( pow( -1, ( n + 1 ) ) * ( ( pow( ( x - 1 ), ( n ) ) ) / ( n ) ) ) + SerieLn( ( n - 1 ), x ) );
    }
}//fin de la función SerieLn

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Este programa genera la suma de la serie de Taylor para Ln(x)" );
    printf( "\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario
    
    printf( "El Ln de %g es igual a: %f", x, SerieLn( n, x ) );//se llama a la función Serie con los valores de n y x como parámetros
    
    return 0;
}