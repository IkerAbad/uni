/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula el valor del número e a partir de su desarrollo en serie:
            1 + 1/1! + 1/2! + 1/3! + ...
        Se suman términos hasta que el siguiente sea menor que la cota introducida.
        ATENCIÓN: este programa viene CON ERRORES A PROPÓSITO (de compilación y de ejecución).
        El ejercicio es encontrarlos y corregirlos.
        (Practica 4, apartado 3.2 -> P4EJ4)
    ENTRADAS:  cota (float), valor por debajo del cual se deja de sumar
    SALIDAS:   e (float), valor aproximado del número e
    ERRORES:
        Es incorrecto si la cota es menor o igual que 0 (el bucle no termina nunca).
        El programa lo comprueba, avisa y no calcula.
        Comprobación: con cota = 0.001 debe salir 2.71806.
*/
#include <iostream>
using namespace std;

int main()
{
    float cota,e,termino;
    int i;

    termino = 1;
    e = 1;

    cout << endl << "Introduce un valor para la cota (positivo y 'pequeño'): ";
    cin >> cota;

    if (cota <= 0)
    {
        cout << "ERROR - La cota debe ser mayor que cero.";
    }
    else
    {
        i = 1;
        while (termino >= cota)
        {
            e = e + termino;
            i = i + 1;
            termino = termino / i;
        }
        cout << endl << "El valor aproximado del número e es: " << e;
    }
    return 0;
}
