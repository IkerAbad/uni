/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                             Registros en C++
// 2.3 Tercer programa.
// Un vendedor de seguros desea dise�ar un sistema para el mantenimiento de los datos correspondientes
// a sus clientes. Para ello ha pensado en almacenar (aunque no sea el mejor m�todo posible) los datos en
// un vector de registros con los siguientes campos:
//           struct tCliente{
//                         char nombre[30];
//                         char apellidos[50];
//                         char dni[10];
//                         float importe; //importe de la p�liza de seguros
//                      };
// El prop�sito del ejercicio es que realices el programa de gesti�n de clientes (c�lculo del importe medio
// de las p�lizas, clientes por encima de la p�liza media, mejor y peor cliente). En el programa debes
// plantear la estructura de datos (un vector) para almacenar los clientes (sup�n que puede haber un
// m�ximo de 50 clientes). El programa integrar� y activar� seg�n corresponda los siguientes
// subprogramas:
//     � Subprogramas de lectura/escritura del registro cliente*.
//     � Subprogramas de lectura/esccritura del vector de clientes
//     � Subprograma polizaMedia, que calcule la media de los importes de las p�lizas de los clientes.
//     � Subprograma superanMedia, que devuelva los datos de los clientes cuyo importe de p�liza
//          supere la media de los importes de las p�lizas (y su n�mero).
//     � Dos subprogramas, mejorCliente y peorCliente, que devuelvan los datos del cliente con
//          importe de p�liza mayor y menor respectivamente.
//          * Notas:
//             � Para leer cadenas de caracteres usamos cin.getline(variableCadena, longitudCadena)
//             � Para limpiar el buffer, usamos cin.ignore() antes de la primera lectura de una cadena
//                  de caracteres
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Sistema de gestión de clientes de seguros: vector de registros tCliente (máximo 50),
        con los subprogramas de lectura/escritura del registro y del vector, y además:
          polizaMedia (media de los importes), superanMedia (clientes por encima de la media),
          mejorCliente y peorCliente.
        Nota: para leer cadenas, cin.getline(variable, longitud); antes de la primera lectura
        de una cadena hay que limpiar el búfer con cin.ignore().
        (Practica 8, apartado 2.3)
    ENTRADAS:  los datos de los clientes
    SALIDAS:   importe medio, clientes que superan la media, mejor y peor
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

struct tCliente{
   char nombre[30];
   char apellidos[50];
   char dni[10];
   float importe; // importe de la póliza de seguros
};

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
