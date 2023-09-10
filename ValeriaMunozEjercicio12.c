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

- El siguiente programa imprime el numero ingresado al reves. 
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>
#include <math.h>

// la funcion InvertirNumeros invertirá el numero ingresado por el usuario, se coge el primer y utlimo digite. 
// numero: es el numero ingresado por el usuario. 
int InvertirNumeros( int numero ){
    
    if( numero > 0 ){
        printf( "%i", ( numero % 10 ) );
        
        InvertirNumeros( floor( numero / 10 ) );
    }//fin del if
    
}

int main(){
   // numero: Almacenará el numero ingresado por el usuario. 
    int numero=0;
    
    printf( "Este programa lee desde el teclado un número\n entero y lo imprime al revés.\nDigite por favor el número: " );
    scanf( "%i", &numero );
    
    InvertirNumeros( numero );
    return 0;
}