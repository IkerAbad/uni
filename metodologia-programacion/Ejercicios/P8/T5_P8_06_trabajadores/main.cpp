/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                             Registros en C++
// 2.6 Sexto Programa.
// Una empresa dedicada a la fabricaci�n de zapatillas desea gestionar la informaci�n acerca de sus
// trabajadores. Para ello, define la estructura (registro) tTrabajador, que permite representar la
// informaci�n relativa a un trabajador de una empresa de fabricaci�n de zapatillas:
// struct tTrabajador
// {
//    char dni[10];    // dni del trabajador
//    int numDeleg;    // delegaci�n en la que est� el trabajador
//    int numDiasTrab; // n�mero de d�as trabajados en el mes
//    int produccion[25]; // vector con la producci�n de zapatillas de cada d�a trabajado.
//                     // Almacenada entre las componentes 0 y numDiasTrab-1
// };
//     � Haz subprogramas para leer y escribir los datos de un trabajador:
//                         void leerTrabajador (tTrabajador & trab);
//                         void escribirTrabajador (tTrabajador trab);
//     � Haz subprogramas para leer y escribir los datos de la empresa (utilizando las acciones
//          anteriores):
//                         void leerEmpresa (tTrabajador empr [], int tam);
//                         void escribirEmpresa (tTrabajador empr [], int tam);
//     � Subprograma que calcule el n�mero de zapatillas producido por un determinado trabajador
//          en el mes.
//     � Subprograma que calcule la media de la producci�n mensual de los trabajadores de una
//          delegaci�n (pasada como par�metro).
// Dise�a un programa en C++ que, utilizando los subprogramas anteriores, tome desde el teclado los
// datos de los trabajadores y muestre:
//     � El n�mero de zapatillas producido por un determinado trabajador (dado su DNI) en el mes.
//     � La producci�n mensual media de los trabajadores de una determinada delegaci�n.
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Gestión de los trabajadores de una fábrica de zapatillas. Subprogramas de lectura/escritura
        del trabajador y de la empresa, el total de zapatillas de un trabajador (por DNI) y la
        producción media mensual de los trabajadores de una delegación.
        (Practica 8, apartado 2.6)
    ENTRADAS:  los datos de los trabajadores
    SALIDAS:   zapatillas de un trabajador (por su DNI) y la producción media de una delegación
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

struct tTrabajador
{
   char dni[10];       // dni del trabajador
   int numDeleg;       // delegación en la que está el trabajador
   int numDiasTrab;    // número de días trabajados en el mes
   int produccion[25]; // producción de zapatillas de cada día trabajado
                       // (de la componente 0 a numDiasTrab-1)
};

/* Cabeceras dadas:
     void leerTrabajador (tTrabajador & trab);
     void escribirTrabajador (tTrabajador trab);
     void leerEmpresa (tTrabajador empr[], int tam);
     void escribirEmpresa (tTrabajador empr[], int tam);
*/

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
