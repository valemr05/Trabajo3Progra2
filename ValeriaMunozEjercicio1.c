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

- El siguiente programa imprime la serie de fibonacci hasta llegar sin sobrepasar el número 10,000.
*/

#include <stdio.h>

//se crea la función SerieDeFibonacci con dos parámetros de tipo entero, primerValor y segundoValor para generar la serie de fibonacci
// primerValor: es el primer termino de la serie de fibonacci, se inicializa en 0
// segundoValor: es el segundo termino de la serie de fibonacci, se inicializa en 1
int SerieDeFibonacci( int primerValor, int segundoValor )
{
    printf( "%i", primerValor );
    //se crea la condición para que la serie de fibonacci no sobrepase el número 10,000
    if ( segundoValor < 10000 ){
        printf( ", " );
        SerieDeFibonacci( segundoValor, ( primerValor + segundoValor ) );
    }
    
    return 0;
}

int main()
{
    printf( "Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va\nsumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34.......\nPara este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n" );
    SerieDeFibonacci( 0, 1 );
 return 0;
}