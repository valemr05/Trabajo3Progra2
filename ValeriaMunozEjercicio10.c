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

- El siguiente programa imprime la serie de Motzkin con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie de Motzkin son: 1, 1, 2, 4, 9, 21, 51, 127, 323.
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

// se crea la función SerieDeMotzkin con cuatro parámetros de tipo entero, primerNumero, segundoNumero, n y numeroDeTerminos para generar la serie de Motzkin
// primerNumero: es el primer termino de la serie de Motzkin, se inicializa en 1
// segundoNumero: es el segundo termino de la serie de Motzkin, se inicializa en 1                                                                          
// n: es el contador de la serie de Motzkin, se inicializa en 2
// numeroDeTerminos: es la cantidad de terminos de la serie de Motzkin que el usuario desea ver, se inicializa en 0
int SerieDeMotzkin( int primerNumero, int segundoNumero, int n, int numeroDeTerminos )
{
    printf( "%i", primerNumero );
    // se crea la condición para que la serie de Motzkin no sobrepase la cantidad de terminos que el usuario desea ver
    if( n <= numeroDeTerminos ){
        printf( ", " );
        SerieDeMotzkin( segundoNumero, ( ( ( ( 3 * ( n - 1 )  ) * primerNumero ) + ( ( ( 2 * n ) + 1 ) * segundoNumero ) ) / ( n + 2 ) ), ( n + 1 ), numeroDeTerminos );
    }//fin del if

    return 0;
    
}

int main()
{
// cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos = 0;
    
    printf( "Esta serie cuenta el número de caminos no cruzados de longitud n en\nuna retícula tridimensional. Comienza con los números 1, 1 y los siguientes términos se calculan como la\nsuma de los términos anteriores y la suma de los términos anteriores menos el tercer término anterior. La\nfórmula para el enésimo número de Motzkin es M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) =1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Motzkin son: ", cantidadDeTerminos );
    SerieDeMotzkin( 1, 1, 2, cantidadDeTerminos );

    return 0;
}