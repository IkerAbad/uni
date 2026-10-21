/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                       Subprogramas en C++
// 2.2 Realizaci�n de programas
// 1. Programa calculador de fracciones (similar al de complejos hecho en esta pr�ctica). Para ello sigue
//    los siguientes consejos:
//        A. Escribe un subprograma para reducir quebrados. Para ello se necesitar� construir previamente
//            una funci�n de c�lculo del m.c.d. Ten en cuenta que � + � no son 2/4 sino �.
//        B. Para la representaci�n de las fracciones utiliza dos variables enteras.
//        C. Escribe subprogramas de lectura y escritura de fracciones.
//        D. Escribe los subprogramas para las operaciones con fracciones (sumar, restar, multiplicar y
//            dividir).
//        E. El programa preguntar� por la operaci�n a realizar y luego leer� las fracciones a operar. Una
//            vez resuelta la operaci�n escribir� el resultado.
// 2. Programa que calcule el valor de la serie de Newton, dados x, y, n. Para ello, desarrollar funciones
//     (combinatorio, potencia y factorial) que permitan usar la expresi�n del desarrollo del binomio de
//     Newton:
//                       0  + 1 n-11 + 2 n-22+...+ n-2 2n-2 + n-1 1n-1 +
// Recuerda que
//   m   =  n    m!   n)!
//   n         !(m -
// y que n! = 1* 2 * 3*...*(n -1) * n si n > 0 y 0! = 1
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula el valor de la serie del binomio de Newton, dados x, y, n, desarrollando funciones
        de combinatorio, potencia y factorial, para usar la expresión:
            (x+y)^n = C(n,0)·x^n + C(n,1)·x^(n-1)·y + ... + C(n,n)·y^n
        donde C(m,n) = m! / (n!·(m-n)!)  y  n! = 1·2·...·n  (con 0! = 1).
        (Practica 6, apartado 2.2, programa 2)
    ENTRADAS:  x, y (float o int) y n (int)
    SALIDAS:   el valor de la serie (float)
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

int main()
{
    // ---- DECLARACIONES ----
    // tipo entradas...;
    // tipo salida;

    // ---- ENTRADA ----
    // cout << "pregunta: ";   cin >> ...;

    // ---- PROCESO ----

    // ---- SALIDA ----
    // cout << "resultado: " << salida << endl;

    return 0;
}
