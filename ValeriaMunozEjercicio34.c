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

//se crea la función SerieSeno con dos parámetros de tipo entero, n para el numero de terminos y x para el valor al cual le hayamos el seno
float SerieSeno( int n, float x )
{
    if( n == 0 )
    {
        return x;
    }
    else
    {
        return ( ( pow( (-1), n ) * pow( x, ( ( 2 * n ) + 1 ) ) ) / Factorial( ( ( 2 * n ) + 1 ) ) ) + SerieSeno( ( n - 1 ), x );
    }
}

int main()
{
    //se crea la variable x de tipo flotante con un valor conocido
    //se crea la variable n de tipo entero con un valor conocido
    float x = 0;
    int n = 0;
    
    printf( "Ingrese el valor de x: " );
    scanf( "%f", &x );
    
    printf( "Ingrese el valor de n: " );
    scanf( "%i", &n );
    
    printf( "El seno de %f es igual a: %f", x, SerieSeno( n, x ) );
    
    return 0;
}