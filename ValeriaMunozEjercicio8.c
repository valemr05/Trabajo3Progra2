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

- El siguiente programa imprime la serie de catalan con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie de Catalán son: 1, 1, 2, 5, 14, 42, 132, 429, 1430.
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

// se crea la función Factorial con un parámetro de tipo long long int, numero, que se encarga de hacer el factorial de un numero
long long int Factorial( long long int numero ){
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        return numero * Factorial( numero - 1 );
    }//fin del if
}//fin de la función Factorial

//se crea la funcion Catalan para hallar cada termino de la serie de catalan
long long int Catalan( long long int numero ){
    return( Factorial( ( numero * 2 ) ) / ( ( Factorial( numero ) * Factorial( ( numero + 1 ) ) ) ) );
}//fin de la función Catalan

// se crea la función SerieDeBell con cuatro parámetros de tipo entero, primerNumero, segundoNumero, contador y terminosTotales para generar la serie de Catalan
// primerNumero: es el primer termino de la serie de Catalan, se inicializa en 1
// segundoNumero: es el segundo termino de la serie de Catalan, se inicializa en 1
// contador: lo utilizaremos para tener la cuenta de los terminos de la serie de Catalan que llevamos en cada vuelta, se inicializa en 1
// terminosTotales: es la cantidad de terminos de la serie de Catalan que el usuario desea ver, se inicializa en 0
long long int SerieCatalan( long long int primerNumero,  long long int segundoNumero, int contador, int terminosTotales )
{   
    printf( "%i", primerNumero );//en cada llamado recursivo de la función se imprime el valor de primerNumero
    
    //se crea el if con la condición de parada de la función, para que solo se impriman los numeros menores a terminosTotales (ingrado por el usuario)
    if( contador < terminosTotales ){
        printf( ", " );
        SerieCatalan ( Catalan( segundoNumero + 1 ), ( segundoNumero + 1 ), (  contador + 1  ), terminosTotales );
    }//fin del if
}//fin de la función SerieDeBell

int main(){
   // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0;
    
    printf( "Este programa presenta la Serie de Catalán: Esta serie es una secuencia de números que\naparece en diversos problemas de conteo en matemáticas. Comienza con los números 1, 1\ny los siguientes términos se calculan como la suma de los productos de los términos\nanteriores. La fórmula para el enésimo número de Catalán es:\nC(n) = (2n)! / (n!(n+1)!), donde C(0) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Catalán son: ", cantidadDeTerminos );
    SerieCatalan( 1, 1, 1, cantidadDeTerminos );//se llama a la función SerieCatalan con los valores iniciales de la serie

    return 0;
}
