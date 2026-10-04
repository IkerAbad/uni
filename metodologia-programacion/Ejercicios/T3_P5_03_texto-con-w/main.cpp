/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                    Tratamiento secuencial en C++
// 2.1.2 Segundo programa
// Traduce el siguiente algoritmo a C++ (P5EJ2)
// Entrada secuencial de enteros que acaba en 0
// Salida: n�mero de unos en la secuencia (numUnos). (Aclaraci�n: No cuenta los d�gitos 1 sino
// los valores 1, Ejm, para la secuencia 21 1 11 5 1 0 deber�a responder 2)
// algoritmo contar_unos
// variables
//    entero n, numUnos
// principio
//    numUnos=0
//    leer(n)
//    mientras que n0 hacer
//       si n==1 entonces
//          numUnos = numUnos +1
//       fsi
//       leer(n)
//    fmq
//    escribir(numUnos)
// fin
// 2.2 Segundo ejercicio
// Con este ejercicio repasar�s c�mo:
// � Trabajar con datos introducidos secuencialmente en C++.
// � Completar programas.
// Aprender�s c�mo
// � Mostrar de manera correcta por pantalla resultados booleanos.
// 2.2.1 Primer programa
// Puedes descargar este programa (P5Ej3.cpp)
// La variable encontrado es de tipo bool, es decir, puede tomar dos valores: true (verdad) o false
// (falso). Sin embargo, cuando pedimos una salida por pantalla para esta variable, �nicamente se
// devuelve un 1 (cuando el valor es true) � un 0 (cuando el valor es false). Esto es as� porque,
// internamente C++ maneja los booleanos como si fuesen enteros, asimilando el 1 con true y el 0 con
// false.
// Completa y mejora el programa de manera que se muestre un mensaje un poco m�s informativo en
// funci�n del valor de la variable encontrado (usando una estructura condicional).
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
        Determina si un texto contiene o no la letra 'w'.
        Hay que COMPLETAR el programa de abajo (los ???) y MEJORARLO para que muestre un
        mensaje más informativo según el valor de 'encontrado' (con una estructura condicional).
        (Practica 5, apartado 2.2.1 -> P5Ej3)
    ENTRADAS:  un texto acabado en punto
    SALIDAS:   la variable booleana 'encontrado' + el mensaje
    ERRORES:
        El programa no termina hasta que se introduce un punto.
*/
#include <iostream>

using namespace std;

int main()
{
   char c;
   bool encontrado;

   cin.unsetf(ios::skipws); // Evita que cin ignore espacios en blanco

   encontrado = false        // Solución del problema trivial

   cout << endl << "Introduce un texto terminado en punto y pulsa ENTER: ";

   cin >> c;

   while ( (???) && (???) )
   {
      if (???)
      {
         encontrado = ???
      }
      cin >> c;
   }

   cout << endl << "¿La letra w estaba en el texto?: " << encontrado;
   return 0;
}
