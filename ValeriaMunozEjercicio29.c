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

- El siguiente programa imprime la serie de Taylor.
- Salvedades: El programa admite valores ingresados de tipo entero para n y flotante x, para valores de otro tipo no garantizamos sus resultados.
*/


#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo entero, numero
int Factorial( int numero )
{
    if( numero == 0 ){
        return 1;
    }//de lo contrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}//fin de la función Factorial

//se crea la función SerieTaylor con dos parámetros de tipo entero, n para el numero de terminos y x para el valor de x
//n: es el numero de terminos de la serie de Taylor
//x: es el valor de x
float SerieTaylor( int n, float x )
{   //se usa resividdad de cola para calcular la serie de Taylor de la funcion coseno
    if( n < 0 ){
        return 1;
    }
    else{
        return( ( pow( x, ( n + 1 ) ) ) / Factorial( n + 1 ) + SerieTaylor( ( n - 1 ), x ) );
    }
}//fin de la función SerieCoseno

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Ingrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario
    
    printf( "La serie de Taylor para %f es igual a: %f", x, SerieTaylor( n, x ) );//se llama a la función SerieTaylor con los valores de n y x como parámetros
    
    return 0;
}