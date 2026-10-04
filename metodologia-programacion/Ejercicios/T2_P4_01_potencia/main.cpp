/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                 Estructura repetitiva en C++
// 3 Sesi�n de pr�cticas
// 3.1 Primer ejercicio
// 3.1.1 Primer programa
// Traduce el siguiente seudoc�digo a C++. Edita, graba con el nombre P4EJ1, compila y ejecuta el
// programa.
// Entradas entero x,y
// Salida entero potencia
// Calcula la potencia de base `x' y exponente `y'
// Algoritmo potencia
// variables
//    entero x, y, potencia, contador
// principio
//    leer(x)
//    leer(y)
//    contador = 1
//    potencia = 1
//    mientras que contador  y hacer
//       potencia = potencia * x
//       contador = contador + 1
//    fmq
//    escribir(potencia)
// fin
// Escribe en C++ una soluci�n del mismo problema usando la estructura do... while y otra usando el
// for
// 3.1.2 Segundo programa
// Traduce el siguiente seudoc�digo a C++, n�mbralo P4EJ2.
// Entradas entero a,b
// Salida entero cociente,resto
// Calcula el cociente y resto de la divisi�n de a entre b, sin utilizar las funciones Mod ni Div
// Algoritmo dividir
// variables
//    entero a, b, cociente, resto
// principio
//    leer(a, b)
//    cociente = 0
//    mientras que a  b hacer
//       a=a-b
//       cociente = cociente + 1
//    fmq
//    resto = a
//    escribir(cociente, resto)
// fin
// Escribe en C++ una soluci�n del mismo problema usando la estructura do... while. �Es posible
// resolverlo mediante la estructura for?
/* ======================================= */

/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula la potencia de base x y exponente y multiplicando repetidamente (sin usar pow).
        (Practica 4, apartado 3.1.1 -> P4EJ1)
    ENTRADAS:  base x y exponente y (int)
    SALIDAS:   x elevado a y (int)
    ERRORES:
        Es incorrecto si y < 0. El programa lo comprueba, avisa y no calcula.
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y,potencia,contador;

    cout << "Introduce la base y el exponente." << endl;
    cout << "Base: ";
    cin >> x;
    cout << "Exponente: ";
    cin >> y;
    contador = 1;
    potencia = 1;

    if (y >= 0){
        while (contador <= y) {
            potencia = potencia * x;
            contador = contador + 1;
        }
        cout << x << " ^ " << y << " = " << potencia;
    } else {
        cout << "ERROR - Exponente negativo.";
    }

    return 0;
}

