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

- El siguiente programa imprime la serie de Pell con la cantidad de terminos ingresada por el usuario.

- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/

#include <stdio.h>

//se crea la función SerieDePell con cuatro parámetros de tipo entero, primerNumero, segundoNumero, contador y terminosTotales para generar la serie de pell
// primerNumero: es el primer termino de la serie de pell, se inicializa en 0
// segundoNumero: es el segundo termino de la serie de pell, se inicializa en 1
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de pell que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de pell que el usuario desea ver, se inicializa en 0
int SerieDePell( int primerNumero, int segundoNumero, int contador, int terminosTotales ){
    printf( "%i", primerNumero );
    //se crea la condición para que la serie de pell no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDePell( segundoNumero, (  primerNumero + ( segundoNumero * 2 ) ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa imprime la serie de Pell: Esta serie comienza con los números 0 y 1, y los siguientes términos se\ncalculan como 2 veces el término anterior más el término anterior al anterior. La fórmula para el enésimo\nnúmero de Pell es P(n) = 2P(n-1) + P(n-2), donde P(0) = 0 y P(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Pell son: ", cantidadDeTerminos );
    SerieDePell( 0, 1, 1, cantidadDeTerminos );

 return 0;
}