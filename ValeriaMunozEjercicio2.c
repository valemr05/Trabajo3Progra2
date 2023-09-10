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

- El siguiente programa imprime la serie de fibonacci hasta llegar sin sobrepasar el número 100 e imprime la suma de sus terminos.
*/

#include <stdio.h>

//se crea la función SerieDeFibonacci con tres parámetros de tipo entero, primerValor, segundoValor y sumaDeTerminos para generar la serie de fibonacci y sumar sus terminos
// primerValor: es el primer termino de la serie de fibonacci, se inicializa en 0
// segundoValor: es el segundo termino de la serie de fibonacci, se inicializa en 1
// sumaDeTerminos: es la suma de los terminos de la serie de fibonacci, se inicializa en 0
int SerieDeFibonacci( int primerValor, int segundoValor, int sumaDeTerminos )
{
    printf( "%i", primerValor );
    //se crea la condición para que la serie de fibonacci no sobrepase el número 100
    if ( segundoValor < 100 ){
        printf( ", " );
        SerieDeFibonacci( segundoValor, ( primerValor + segundoValor ), ( sumaDeTerminos + primerValor ) );
    }
    else{
         printf ( " y su suma es: %i", ( sumaDeTerminos + primerValor ) );
    }
    
    return 0;
}

int main()
{
    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100. \nLos números a sumar son:\n" );
    SerieDeFibonacci( 0, 1, 0 );

 return 0;
}