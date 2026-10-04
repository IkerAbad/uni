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
