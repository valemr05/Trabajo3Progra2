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

- El siguiente programa imprime una serie de ternas.
*/

#include <stdio.h>

//se crea la función Ternas con tres parámetros de tipo entero, fila1, fila2 y contadorFila2
//fila1: es el primer numero de la terna.
//fila2: es el segundo numero de la terna.
//fila3: es el tercer numero de la terna.
int Ternas( int fila1, int fila2, int fila3 )
{   //se crea la condicion de parada, fila1 debe ser menor o igual a 9, ya que el numero de filas es 10
    if( fila1 <= 9 ){
        if ( ( fila1 % 3 ) == 0 ){ 
            printf( "%i %i %i\n", fila1, fila2, fila3 );
            Ternas( ( fila1 + 1 ), ( fila2 + 1 ), 1 );
        }//de lo contrario
        else{
            printf( "%i %i %i\n", fila1, fila2, fila3 );
            Ternas( ( fila1 + 1 ), fila2, ( fila3 + 1 ) );
        }//fin del if (fila1 % 3) == 0
    }//fin del if fila1 <= 9
}//fin de la función Ternas

int  main()
{
    printf( "Ternas: \n" );
    Ternas( 1, 1, 1 );//se llama a la función Ternas con los valores iniciales de las Ternas 1, 1 y 1 como parámetros para iniciar la primera terna
  return 0;
}