/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                     Tratamiento secuencial en C++
// /*
//    AUTOR:
//    DESCRIPCION:
//       Determina si un texto contiene o no la letra `w'
//    ENTRADAS: Un texto acabado en punto (para ello se usa la variable c)
//    SALIDAS: variable encontrado, de tipo booleano
//    ERRORES: El programa no terminar� hasta que se introduzca un punto
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    char c;
//    bool encontrado;
//    cin.unsetf(ios::skipws); // Evita que cin ignore espacios en blanco
//    encontrado = false        // Soluci�n del problema trivial
//    cout <<endl<<"Introduce un texto terminado en punto y pulsa ENTER: ";
//    cin>>c;
//    while ( (???) && (???) )
//    {
//       if (???)
//       {
//          encontrado=???
//       }
//       cin >> c;
//    }
//    cout << endl << "�La letra w estaba en el texto?: " << encontrado;
//        return 0;
// }
// 2.2.2 Segundo programa
// Traduce el siguiente algoritmo a C++ (P5EJ4)
// Entrada secuencial de enteros que acaba en 0
// Salida: indica si todos los valores de la secuencia son o no pares (todosPares)
// algoritmo detectar_impar
// variables
//    entero n
//          booleano todosPares
// principio
//    todosPares = verdad
//    leer(n)
//    mientras que n0 AND todosPares hacer
//       si n MOD 2 == 1 entonces
//          todosPares = falso
//       fsi
//       leer(n)
//    fmq
//    escribir(todosPares)
// fin
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Dice si todos los valores de una entrada secuencial de enteros (acabada en 0) son pares.
        Traducir el algoritmo. (Practica 5, apartado 2.2.2 -> P5EJ4)
    ENTRADAS:  una secuencia de enteros terminada en 0
    SALIDAS:   si todos son pares o no (todosPares, booleano)
    ERRORES:
        El programa no termina hasta recibir el 0.
*/
#include <iostream>

using namespace std;

/* Pseudocódigo del enunciado (tradúcelo a C++):
   algoritmo detectar_impar
   variables
      entero n
      booleano todosPares
   principio
      todosPares = verdad
      leer(n)
      mientras que n != 0 AND todosPares hacer
         si n MOD 2 == 1 entonces
            todosPares = falso
         fsi
         leer(n)
      fmq
      escribir(todosPares)
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
