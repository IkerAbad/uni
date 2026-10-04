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
