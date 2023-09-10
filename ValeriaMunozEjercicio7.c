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

- El siguiente programa imprime la serie de Narayana con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros 9 términos de la serie de Narayana son: 1, 1, 1, 2, 3, 4, 6, 9, 13
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

//se crea la función SerieDeNarayana con cinco parámetros de tipo entero, primerNumero, segundoNumero, tercerNumero, contador y terminosTotales para generar la serie de narayana
// primerNumero: es el primer termino de la serie de narayana, se inicializa en 1
// segundoNumero: es el segundo termino de la serie de narayana, se inicializa en 1
// tercerNumero: es el tercer termino de la serie de narayana, se inicializa en 1
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de narayana que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de narayana que el usuario desea ver, se inicializa en 0
int SerieDeNarayana( int primerNumero, int segundoNumero, int tercerNumero, int contador, int terminosTotales )
{
    printf( "%i", primerNumero );
    //se crea la condición para que la serie de narayana no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDeNarayana( segundoNumero, tercerNumero, ( primerNumero + tercerNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main()
{
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos = 0;
    
    printf( "Esta serie comienza con los números 1, 1 y 1. Los siguientes términos\nse calculan como la suma del término anterior y el número de parejas de términos consecutivos anteriores\nque son diferentes. La fórmula para el enésimo número de Narayana es N(n) = N(n-1) + N(n-3), donde\nN(0) = 1, N(1) = 1 y N(2) = 1.\nLos primeros nueve términos de la serie de Narayana son:" );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Narayana son: ", cantidadDeTerminos );
    SerieDeNarayana( 1, 1, 1, 1, cantidadDeTerminos );

 return 0;
}