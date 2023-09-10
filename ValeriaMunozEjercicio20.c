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

- El siguiente programa imprime una secuencia de un triangulo rectangulo con la letra A

*/

#include <stdio.h>

//Se crea la función ImprimirA que imprime la letra A recursivamente
//inicioA es el contador de las A que se van a imprimir
//finalA es la cantidad de A que se van a imprimir
int ImprimirA( int inicioA, int finalA ){
  if( inicioA <= finalA ){
    printf( "A" );
    ImprimirA( inicioA + 1, finalA );
  }
}

//Se crea la función ImprimirEspacios que imprime espacios recursivamente
//inicioEspacios es el contador de los espacios que se van a imprimir
//finalEspacios es la cantidad de espacios que se van a imprimir
int ImprimirEspacios( int inicioEspacios, int finalEspacios ){
  if( inicioEspacios <= finalEspacios ){
    printf( " " );
     ImprimirEspacios( inicioEspacios + 1, finalEspacios );
  }
}

//Se crea la función ImprimirSecuencia que imprime recursivamente la secuencia de A
//fila es el contador de las filas que se van a imprimir
int ImprimirSecuencia( int fila ){
  if( fila <= 25 ) {
    ImprimirEspacios( 1, 79 - fila + 1 );
    ImprimirA( 1, fila );
    printf( "\n" );
    ImprimirSecuencia( fila + 1 );
  }
}

// Llamada inicial a la función recursiva
int main(){
   ImprimirSecuencia( 1 );
}