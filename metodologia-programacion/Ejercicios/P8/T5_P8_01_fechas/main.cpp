/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                               Registros en C++
// 2 Sesi�n de pr�cticas
// 2.1 Primer programa.
// Se va a realizar un programa que lea dos fechas y diga si son iguales. Para almacenar las fechas se va a
// definir un tipo de dato registro. Para la lectura de las fechas se crear� una acci�n y para la comparaci�n
// se utilizar� una funci�n. A continuaci�n, se muestra una soluci�n en seudoc�digo. El prop�sito del
// ejercicio es traducir el programa a C++ (ll�malo P8Ej1).
// Entrada: dos fechas
// Salida: determina si son iguales las dos fechas
// tipodef
//    tFecha = registro
//                      entero d�a, mes, a�o
//                  freg
// Algoritmo Fechas
// variables
//    tFecha f1, f2
//    booleano iguales
// principio
//    leerFecha(f1)
//    leerFecha(f2)
//    iguales = compara(f1, f2)
//    escribir(iguales)
// fin
// acci�n leerFecha (S/tFecha f)
// {Pre:--; Post: devuelve una fecha}
// principio
//    repetir
//       leer(f.dia)
//    mientras que f.dia < 1 or f.dia > 31
//    repetir
//       leer(f.mes)
//    mientras que f.mes < 1 or f.mes > 12
//    leer(f.a�o)
// fin
// funci�n compara (tFecha f1, tFecha f2) devuelve booleano
//    {Pre: f1, f2 cualesquiera}
//    {Post: devuelve verdad si f1 = f2, FALSO en caso contrario}
// principio
//    si f1.dia==f2.dia and f1.mes==f2.mes and f1.a�o==f2.a�o entonces
//       devuelve verdad
//    si_no
//       devuelve falso
//    fsi1
// fin
// 1 Ser�a mejor escribir el cuerpo de esta funci�n de la siguiente manera:
// principio
//    devuelve f1.dia==f2.dia and f1.mes==f2.mes and f1.a�o==f2.a�o
// fin
/* ======================================= */

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
