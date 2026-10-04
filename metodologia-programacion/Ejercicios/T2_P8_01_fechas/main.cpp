/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Traduce el programa de fechas a C++: define el tipo registro tFecha (día, mes, año),
        una acción leerFecha (con la validación de día 1-31 y mes 1-12) y una función
        compara que diga si dos fechas son iguales.
        (Practica 8, apartado 2.1 -> P8Ej1)
    ENTRADAS:  dos fechas (día, mes, año)
    SALIDAS:   si las dos fechas son iguales
    ERRORES:
        El día debe estar entre 1 y 31 y el mes entre 1 y 12 (se repite la lectura).
*/
#include <iostream>

using namespace std;

/* Seudocódigo del enunciado (tradúcelo a C++):
   tipodef
      tFecha = registro
                  entero dia, mes, anyo
              freg

   Algoritmo Fechas
   variables
      tFecha f1, f2
      booleano iguales
   principio
      leerFecha(f1)
      leerFecha(f2)
      iguales = compara(f1, f2)
      escribir(iguales)
   fin

   acción leerFecha (S/tFecha f)
      {Pre:--; Post: devuelve una fecha}
   principio
      repetir
         leer(f.dia)
      mientras que f.dia < 1 or f.dia > 31
      repetir
         leer(f.mes)
      mientras que f.mes < 1 or f.mes > 12
      leer(f.anyo)
   fin

   función compara (tFecha f1, tFecha f2) devuelve booleano
      {Post: devuelve verdad si f1 = f2, falso en caso contrario}
   principio
      devuelve  (f1.dia==f2.dia and f1.mes==f2.mes and f1.anyo==f2.anyo)
   fin
*/

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
