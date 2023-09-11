#include <stdio.h>
#include "funciones.h"

/*int cambiar_n(int i);
void llenar(float datos[], int n);
void imprimir(float datos[], int n);
float media(float datos[], int n);
float mediana(float datos[], int n);
float moda(float datos[], int n);
float rango(float datos[], int n);
float varianza(float datos[], int n);
float des_estandar(float datos[], int n);
float cuartil_1(float datos[], int n);
float cuartil_3(float datos[], int n);
float rango_intercuartil(float datos[], int n);
void todo(float datos[], int n);
*/

void vercomandos(){

    printf("\n\t|   COMANDO   |                  FUNCION                                          |\t");
    printf("\n\t|---------------------------------------------------------------------------------|\t");
    printf("\n\t|    ayuda    | Imprime nuevamente la tabla de ayuda.                             |\t");
    printf("\n\t|    salir    | Termina el programa.                                              |\t");
    printf("\n\t|      n      | Cambiar la cantidad de datos (por defec, n=100).                  |\t");
    printf("\n\t|    datos    | Cambiar todos los datos con los que usted desea trabajar.         |\t");
    printf("\n\t|   cambiar   | Cambiar un datos en la posicion especifica.                       |\t");
    printf("\n\t|   imprimir  | Imprimir los datos ordenados con los que se trabajan actualmente. |\t");
    printf("\n\t|    media    | Calcular la media aritmetica del conjunto de datos                |\t");
    printf("\n\t|   mediana   | Calcular la mediana del conjunto de datos.                        |\t");
    printf("\n\t|     moda    | Calcular la moda del conjunto de datos.                           |\t");
    printf("\n\t|   varianza  | Calcular la varianza del conjunto de datos.                       |\t");
    printf("\n\t|   desvest   | Calcular la desviacion estandar del conjunto de datos.            |\t");
    printf("\n\t|  cuartil_1  | Calcular el primer cuartil del conjunto de datos.                 |\t");
    printf("\n\t|  cuartil_3  | Calcular el tercer cuartil del conjunto de datos.                 |\t");
    printf("\n\t|     ric     | Calcular el rango intercuartilado del conjunto de datos.          |\t");
    printf("\n\t|    rango    | Calcular el rango del conjunto de datos.                          |\t");
    printf("\n\t|    todos    | Calcular todas las medidas del sobre el conjunto de datos.        |\t");
}