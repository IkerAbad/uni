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
