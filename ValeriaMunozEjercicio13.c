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

- El siguiente programa lee desde el teclado un grupo de 75 números,
 diferentes a cero(validar este requisito) y al final de leídos, imprima:
* Cantidad de números Mayores a 150
* Número mayor y número menor encontrado en el grupo
* Cantidad de Números negativos encontrados
* Promedio de los Positivos Encontrados.
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/
#include <stdio.h>

//Se crea la función LeerNumeros, que recibe como parámetros los contadores de cada requisito y lee los números ingresados recursivamente
//contador: contador de los números ingresados
//numeroMayor: número mayor ingresado
//numeroMenor: número menor ingresado
//negativos: cantidad de números negativos ingresados
//positivos: cantidad de números positivos ingresados
//sumaPositivos: suma de los números positivos ingresados
//mayores150: cantidad de números mayores a 150 ingresados
int LeerNumeros( int contador, int numeroMayor, int numeroMenor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    //Se crea la variable numero de tipo entero para almacenar el número ingresado por el usuario
    int numero = 0;

    if( contador < 5 ){
        printf( "\nIngrese un número: " );
        scanf( "%i", &numero );

        if( numero == 0 ){
            printf( "\nEl número no puede ser cero." );
            LeerNumeros( contador, numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
        }
        else{
            VerificarResultados( numero, contador, numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
        }
    }
    else{
        ImprimirResultados( numeroMayor, numeroMenor, negativos, positivos, sumaPositivos, mayores150 );
    }

    return 0;
}

//Se crea la función VerificarResultados, que recibe como parámetros los contadores de cada requisito y realiza el conteo de cada uno de ellos
//numero: número ingresado por el usuario
//contador: contador de los números ingresados
//mayor: número mayor ingresado
//menor: número menor ingresado
//negativos: cantidad de números negativos ingresados
//positivos: cantidad de números positivos ingresados
//sumaPositivos: suma de los números positivos ingresados
//mayores150: cantidad de números mayores a 150 ingresados
int VerificarResultados( int numero, int contador, int mayor, int menor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    if( numero > 150 ){
        mayores150++;
    }
    if( numero > mayor ){
        mayor = numero;
    }
    if( numero < menor ){
        menor = numero;
    }
    if( numero < 0 ){
        negativos++;
    }
    if( numero > 0 ){
        positivos++;
    }
    if( numero > 0 ){
        sumaPositivos += numero;
    }

    LeerNumeros( ( contador + 1 ), mayor, menor, negativos, positivos, sumaPositivos, mayores150 );

    return 0;
}

//Se crea la función ImprimirResultados, que recibe como parámetros los contadores de cada requisito e imprime los resultados
int ImprimirResultados( int mayor, int menor, int negativos, int positivos, int sumaPositivos, int mayores150 )
{
    printf( "\nCantidad de números mayores a 150: %i", mayores150 );
    printf( "\nNúmero mayor: %i", mayor );
    printf( "\nNúmero menor: %i", menor );
    printf( "\nCantidad de números negativos: %i", negativos );
    printf( "\nPromedio de los números positivos: %f", ( sumaPositivos * 1.0 / positivos ) );

    return 0;
}


int main()
{   
    printf( "Este programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime:\n* Cantidad de números Mayores a 150\n* Número mayor y número menor encontrado en el grupo\n* Cantidad de Números negativos encontrados\n* Promedio de los Positivos Encontrados.\n" );

    LeerNumeros( 0, 0, 0, 0, 0, 0, 0);
    
    return 0;
}