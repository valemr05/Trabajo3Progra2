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

- El siguiente programa imprime el factorial de un numero ingresado por el usuario.
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

//se crea la función SumaFactoriales con tres parámetros de tipo entero, numero para el numero actual, final para el numero final y acumulado para la suma de los factoriales
int SumaFactoriales( int inicio, int final, int acumulado )
{
    if( inicio < final ){
        printf( "%i + ", Factorial( inicio ) );
        ( SumaFactoriales( ( inicio + 1 ), final, ( acumulado + Factorial( inicio ) ) ) );
    }//de lo contrario
    else{
        printf( "%i = %i", Factorial( inicio ), ( acumulado + Factorial( inicio ) ) );
    }//fin del if
}//fin de la función SumaFactoriales

//se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    if ( numero < 0 ) {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
        ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo
    }//de lo contrario
    else {
        SumaFactoriales( 0, numero, 0 );//se llama a la función SumaFactoriales con los valores de numero como parámetros
    }//fin del if
    
}//fin de la función ValidarNumero

int main()
{
    int numero=0;//se crea la variable numero de tipo entero con un valor conocido

    printf( "El siguiente programa lee un número entero, no negativo y muestra la suma de los\nfactoriales de todos los números desde 0 hasta el numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario

    ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo

    return 0;
}