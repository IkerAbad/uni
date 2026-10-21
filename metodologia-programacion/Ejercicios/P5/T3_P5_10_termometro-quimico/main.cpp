/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                    Tratamiento secuencial en C++
// 2.3 Realizaci�n de programas
// 1 Calcular la longitud media de las palabras de una entrada secuencial de caracteres acabada con
//      un punto. (Puede haber varios espacios entre palabras y puede haber espacios al principio y al
//      final de la secuencia).
// 2 Calcular el m�ximo de una secuencia de enteros no negativos acabada en -1 (si no se introduce
//      ning�n dato salvo la marca el m�ximo es 0).
// 3 Dada una entrada secuencial de caracteres terminada con un punto, que solo contiene letras y
//      espacios en blanco, aunque puede haber varios espacios entre palabras y puede haber espacios
//      al principio y al final de la secuencia:
//      A. Dise�a un programa para determinar si hay alguna palabra de m�s de 10 caracteres.
//      B. Dise�a un programa que calcule el n�mero de palabras que contienen al menos una letra
//          may�scula.
//      C. Dise�a un programa que calcule el porcentaje de palabras que tienen menos de ocho letras.
// 4. Dise�a un programa para controlar la temperatura de un proceso qu�mico desarrollado en un
//     laboratorio. El proceso debe realizarse dentro de unos m�rgenes de temperatura comprendidos
//     entre un umbral m�nimo (entre 20 y 21,5 grados) y un umbral m�ximo (entre 23 y 24 grados). El
//     programa leer� y validar� esos valores reales antes de comenzar el monitoreo.
//      A continuaci�n, el programa recibe, a intervalos constantes de tiempo, la temperatura del
//      laboratorio (entrada secuencial de valores reales, cuando el monitoreo finaliza, se marca
//      mediante una temperatura de valor cero).
//      Si la temperatura se sale del rango permitido, el programa escribir� un mensaje de alarma
//      ("Interrumpido el proceso por salida de rango"), mostrar� la temperatura que la ha producido y
//      dejar� de monitorizar el proceso.
//      Si no se produce ninguna salida de rango de las temperaturas, el programa acabar� al recibir
//      una temperatura de cero grados (marca de fin). En este caso escribir� un mensaje ("Fin del
//      proceso sin incidencias") y mostrar� la temperatura media
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Controla la temperatura de un proceso químico. Primero lee y VALIDA dos umbrales reales:
        el mínimo (entre 20 y 21,5) y el máximo (entre 23 y 24). Después recibe temperaturas
        (secuencia de reales terminada en 0). Si alguna se sale del rango, avisa
        ("Interrumpido el proceso por salida de rango"), muestra la temperatura culpable y para.
        Si acaba sin incidencias (marca 0), escribe "Fin del proceso sin incidencias" y la media.
        (Practica 5, apartado 2.3, programa 4)
    ENTRADAS:  los dos umbrales y la secuencia de temperaturas (terminada en 0)
    SALIDAS:   mensajes de alarma o de fin, y la temperatura media
    ERRORES:
        Los umbrales deben estar en sus rangos (20-21,5 y 23-24) y mínimo < máximo.
*/
#include <iostream>

using namespace std;

int main()
{
    // ---- DECLARACIONES ----
    // const tipo CTE = valor;
    // tipo entradas...;
    // tipo salida;

    // ---- ENTRADA ----
    // cout << "pregunta: ";   cin >> ...;

    // ---- PROCESO ----

    // ---- SALIDA ----
    // cout << "resultado: " << salida << endl;

    return 0;
}
