/*
    FECHA:     14-10-2026
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
    int n;
    bool todosPares;

    todosPares = true;
    cout << "Introduce una secuencia de números enteros acabada en 0: ";
    cin >> n;

    while (n != 0 && todosPares)
    {
      if (n % 2 == 1)
      {
         todosPares = false;
      }
      cin >> n;
    }
    
    if (todosPares)
      {
         cout << "¿Son todos los números pares?: Sí";
      } else {
         cout << "¿Son todos los números pares?: No";
      }

    return 0;
}
