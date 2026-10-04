/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                 Tratamiento secuencial en C++
// 2 Sesi�n de pr�cticas
// 2.1 Primer ejercicio
// Con este ejercicio aprender�s c�mo:
// � Trabajar con datos introducidos secuencialmente en C++.
// 2.1.1 Primer programa
// Traduce el siguiente algoritmo a C++ (P5EJ1)
// Entrada secuencial de caracteres que acaba en `.'
// Salida: n�mero de aes en la secuencia de entrada (num_a)
// algoritmo contar_aes
// variables
//          car�cter c
//          entero num_a
// principio
//    num_a =0
//    leer(c)
//    mientras que c'.' hacer
//       si c ==`a' entonces
//          num_a=num_a+1
//       fsi
//       leer(c)
//    fmq
//    escribir(num_a)
// fin
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Cuenta cuántas letras 'a' hay en una entrada secuencial de caracteres que acaba en '.'.
        Traducir el algoritmo del enunciado. (Practica 5, apartado 2.1.1 -> P5EJ1)
    ENTRADAS:  una secuencia de caracteres terminada en '.'
    SALIDAS:   el número de aes (num_a, int)
    ERRORES:
        El programa no termina hasta recibir el punto.
*/
#include <iostream>

using namespace std;

/* Pseudocódigo del enunciado (tradúcelo a C++):
   algoritmo contar_aes
   variables
      carácter c
      entero num_a
   principio
      num_a = 0
      leer(c)
      mientras que c != '.' hacer
         si c == 'a' entonces
            num_a = num_a + 1
         fsi
         leer(c)
      fmq
      escribir(num_a)
   fin
*/

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
