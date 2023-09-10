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

- El siguiente programa imprime la serie de Perrin con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie de Perrin son: 3, 0, 2, 3, 2, 5, 5, 7, 10.

- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

//se crea la función SerieDePerrin con cuatro parámetros de tipo entero, primerNumero, segundoNumero, contador y terminosTotales para generar la serie de perrin
// primerNumero: es el primer termino de la serie de perrin, se inicializa en 3
// segundoNumero: es el segundo termino de la serie de perrin, se inicializa en 0
// tercerNumero: es el tercer termino de la serie de perrin, se inicializa en 2
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de perrin que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de perrin que el usuario desea ver, se inicializa en 0
int SerieDePerrin( int primerNumero, int segundoNumero, int tercerNumero, int contador, int terminosTotales ){
    printf( "%i", primerNumero );
    //se crea la condición para que la serie de perrin no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDePerrin( segundoNumero, tercerNumero,  (  primerNumero + segundoNumero  ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa imprime la serie de Perrin: Esta serie comienza con los números 3, 0 y 2. Los siguientes términos \nse calculan como la suma del término anterior y el tercer término anterior. La fórmula para el enésimo\nnúmero de Perrin es P(n) = P(n-2) + P(n-3), donde P(0) = 3, P(1) = 0 y P(2) = 2." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Perrin son: ", cantidadDeTerminos );
    SerieDePerrin( 3, 0, 2, 1, cantidadDeTerminos );

 return 0;
}