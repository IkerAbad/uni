/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                               Estructura repetitiva en C++
// 3.3.2 Segundo programa.
// Completa la condici�n de continuaci�n y el caso inicial del siguiente programa (P4EJ6.cpp).
// Calcular la suma de los n primeros n�meros naturales ( 1 + 2 + ... + n )
//   /* FECHA:
//        AUTOR:
//        DESCRIPCI�N:
//          Obtiene la suma de los n primeros n�meros naturales
//        ENTRADAS: n = n�mero de n�meros que se quiere sumar
//        SALIDAS: suma = la suma de los n�meros
//        ERRORES: El programa no acaba nunca si se introduce un valor negativo en n
//   */
//   #include <iostream>
//   using namespace std;
//   int main()
//   {
//      int n;
//      int suma;
//      int sumando;
//      cout << "�n?"
//      cin >> n;
//      ......
//      ......
//      while .....
//      {
//          sumando = sumando + 1;
//          suma = suma + sumando;
//      }
//      cout << endl << suma;
//      return 0;
//   }
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Obtiene la suma de los n primeros números naturales (1 + 2 + ... + n).
        Hay que COMPLETAR el caso inicial (las dos líneas de puntos) y la condición del while.
        (Practica 4, apartado 3.3.2 -> P4EJ6)
    ENTRADAS:  n (int)
    SALIDAS:   suma (int)
    ERRORES:
        El programa no acaba nunca si n es negativo.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int suma;
    int sumando;

    cout << "¿n? = ";
    cin >> n;

    sumando = 0;
    suma = 0;


    while (sumando < n)
    {
        sumando = sumando + 1;
        suma = suma + sumando;
    }
    cout << endl << "Suma: " << suma;
    return 0;
}
