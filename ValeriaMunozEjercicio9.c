/*- Fecha de publicación: 03/09/2023
- Hora: 6:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa presenta la serie de Bell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
  se hizo un cambio en la formula utilizada en el contrato, en su lugar se utilizo la siguiente formula
 B(termino de la serie) = 1/e * sumatoria desde k=0 de k^n / k! ( entre el numero final de la sumatoria sea mayor, mas aproximado estara el termino resultante)
*/
#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo entero
//numero: se encarga de hacer el factorial de un numero
float Factorial( float numero ){
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}//fin de la función Factorial

/*se crea la función Sumatoria con cuatro parámetros de tipo flotante, k, n, resultado y limite que se encarga de hacer
la sumatoria necesaria para hallar cada termino de la serie 
k: es el termino de la sumatoria, se inicializa en 0
n: es el exponente de k, se inicializa en 1
resultado: es el resultado de la sumatoria, se inicializa en 0
limite: es el limite de la sumatoria, se inicializa en 100
*/
float Sumatoria( float k, float n, float resultado, float limite )
{
    //se le pone un limite a la sumatoria, sabiendo que entre mayor sea este, mas aproximado estara el resultado
    if( k <= limite ){
        return Sumatoria( ( k + 1 ), n, ( resultado + ( pow( k, ( n - 1 ) ) / Factorial( k ) ) ), limite );
                                                                //se le resta un 1 a n ya que esta inicia en 1 y debe iniciar en 0
    }//de lo contrario
    else{
        //se multiplica el resultado de la sumatoria por 1/e para obtener el termino de la serie ( e = numero euler )
        return ( resultado * ( 1 / 2.718281828459045235 ) );
    }//fin del if
}//fin de la función Sumatoria

//se crea la función SerieDeBell con dos parámetros de tipo entero, primerNumero y terminosTotales
//primerNumero: es el primer termino de la serie de Bell, se inicializa en 1
//terminosTotales: es la cantidad de terminos de la serie de Bell que el usuario desea ver, se inicializa en 0
int SerieDeBell( int primerNumero, int terminosTotales )
{   
    //se crea el if con la condición de parada de la función, para que solo se impriman los numeros menores a terminosTotales (ingrado por el usuario)
    if( primerNumero < terminosTotales ){
        printf( "%g, ", Sumatoria( 0, primerNumero, 0, 100 ) );
        //se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
        SerieDeBell( ( primerNumero + 1 ), terminosTotales );
    }//de lo contrario
    else{
        printf( "%g", Sumatoria( 0, primerNumero, 0, 100 ) );
    }//fin del if
    
}//fin de la función SerieDeBell

int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa presenta la Serie de Bell: Esta serie comienza con los números 1 y 1.\nLos siguientes términos se calculan como la suma de los términos anteriores multiplicados\npor los números naturales consecutivos. La fórmula para el enésimo número de Padovan es:\nB(n) = 1/e * sumatoria desde k=0 de k^n / k!, donde k = termino de la sumatoria,\nentre mas numeros se usen en la sumatoria mas preciso sera el numero resultante." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );
    SerieDeBell( 1, cantidadDeTerminos );//se llama a la función SerieDeBell con los valores iniciales de la serie, 1 para iniciar el contador y cantidadDeTerminos como parámetros

    return 0;
}