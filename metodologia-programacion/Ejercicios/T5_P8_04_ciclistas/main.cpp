/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                             Registros en C++
// 2.4 Cuarto Programa.
// Los promotores de la Vuelta Ciclista a Espa�a necesitan gestionar informaci�n sobre los ciclistas
// participantes. La informaci�n que se desea almacenar para cada corredor es el nombre, dorsal,
// equipo, tiempo invertido y diferencia de tiempo con el l�der de la carrera. Este �ltimo dato ser�
// calculado a partir de los dem�s en uno de los apartados del ejercicio. Los datos referentes a tiempos
// ser�n considerados enteros.
//     1. Proponer las estructuras de datos necesarias para almacenar los datos correspondientes a un
//          corredor (tCorredor) y a todos los corredores (vector de tCorredor, sup�n 100 corredores
//          como m�ximo).
//     2. Realizar una funci�n que devuelva el tiempo invertido del l�der de la carrera (el que menos
//          tiempo lleva empleado).
//                                          int lider (tCorredor p[], int n);
//          donde p es el conjunto de corredores y n el n�mero de corredores.
//     3. Realizar un programa que lea la informaci�n sobre todos los corredores (recuerda, salvo el dato
//          de diferencia respecto del l�der de la carrera). A continuaci�n, haciendo uso de la funci�n
//          anterior, el programa calcular� (y guardar�) el valor del campo diferencia para cada uno de ellos.
//          Por �ltimo, mostrar� por pantalla el contenido final del vector.
// 2.5 Quinto Programa.
// Desarrolla un programa para gestionar informaci�n sobre los alumnos de una clase (el programa
// integrar� y activar� seg�n corresponda los siguientes subprogramas).
//     � Define un tipo de datos tAlumno que permita representar la siguiente informaci�n de un
//          alumno: nombre, primer apellido, segundo apellido y nota.
//     � Construye las acciones de lectura y escritura para el tipo tAlumno y para todos los alumnos de
//          una clase (un vector de tAlumno).
//             void leerAlumno(tAlumno & alumno);
//             void leerClase (tAlumno clase[], int tam);
//     � Construye una funci�n que calcule la nota media de una clase.
//     � Construye una funci�n que calcule el porcentaje de aprobados de una clase.
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Gestión de corredores de la Vuelta: registro tCorredor (nombre, dorsal, equipo, tiempo y
        diferencia con el líder) y un vector de hasta 100 corredores.
        1) Proponer las estructuras de datos.  2) Función  int lider(tCorredor p[], int n)
        que devuelva el tiempo del que menos lleva.  3) Programa que lea los corredores (salvo
        la diferencia), calcule el campo diferencia de cada uno con la función anterior y
        muestre el vector final.
        (Practica 8, apartado 2.4)
    ENTRADAS:  los datos de los corredores (tiempos enteros)
    SALIDAS:   el vector de corredores con la diferencia al líder
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

/* Cabecera de la función que hay que realizar:
     int lider (tCorredor p[], int n);
*/

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
