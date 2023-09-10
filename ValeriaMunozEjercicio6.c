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

- El siguiente programa imprime la serie de Padovan con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros 9 términos de la serie Padovan son: 1, 0, 0, 1, 0, 1, 1, 1, 2

- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

//se crea la función SerieDePadovan con cinco parámetros de tipo entero, primerNumero, segundoNumero, tercerNumero, contador y terminosTotales para generar la serie de padovan
// primerNumero: es el primer termino de la serie de padovan, se inicializa en 1
// segundoNumero: es el segundo termino de la serie de padovan, se inicializa en 0
// tercerNumero: es el tercer termino de la serie de padovan, se inicializa en 0
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de padovan que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de padovan que el usuario desea ver, se inicializa en 0
int SerieDePadovan( int primerNumero, int segundoNumero, int tercerNumero, int contador, int terminosTotales ){
    printf( "%i", primerNumero );
    //se crea la condición para que la serie de padovan no sobrepase la cantidad de terminos que el usuario desea ver
    if( contador < terminosTotales ){
        printf( ", " );
        SerieDePadovan( segundoNumero, tercerNumero, ( primerNumero + segundoNumero ), ( contador + 1 ), terminosTotales );
    }//fin del if
    
}

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa presenta la Serie de Padovan: Esta serie comienza con los números 1, 0 y 0.\nLos siguientes términos se calculan como la suma de los dos términos anteriores y el\ntercer término anterior. La fórmula para el enésimo número de Padovan es:\nP(n) = P(n-2) + P(n-3), donde P(0) = 1, P(1) = 0 y P(2) = 0." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Padovan son: ", cantidadDeTerminos );
    SerieDePadovan( 1, 0, 0, 1, cantidadDeTerminos );
  
    return 0;
}