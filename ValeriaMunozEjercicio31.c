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

- El siguiente programa imprime la serie seno de taylor.
- Salvedades: El programa admite valores ingresados de tipo entero para n y flotante x, para valores de otro tipo no garantizamos sus resultados.
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

// se crea la función SerieSenoHiperbolico con dos parámetros de tipo entero, n para el numero de terminos y x para el valor de x
float SerieSenoHiperbolico( int n, float x )
{
    if( n == 0 )
    {
        return x;
    }
    else
    {
        return ( ( pow( x, ( ( 2 * n ) + 1 ) ) ) / Factorial( ( ( 2 * n ) + 1 ) ) ) + SerieSenoHiperbolico( ( n - 1 ), x );
    }
}

int main()
{
    //se crea la variable x de tipo flotante con un valor conocido
    //se crea la variable n de tipo entero con un valor conocido, se utiliza para para la cantidad de terminos
    float x = 0;
    int n = 0;
    
    printf( "Ingrese el valor de x: " );
    scanf( "%f", &x );
    
    printf( "Ingrese el valor de n: " );
    scanf( "%i", &n );
    
    printf( "El seno hiperbolico de %f es igual a: %f", x, SerieSenoHiperbolico( n, x ) );
    
    return 0;
}

