/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Obtiene el número de términos que hay que sumar de la serie armónica
            1 + 1/2 + 1/3 + ... + 1/n
        para que la suma sobrepase un límite dado.
        Hay que COMPLETAR la condición de continuación del while (y falta un ';' antes).
        (Practica 4, apartado 3.3.1 -> P4EJ5)
    ENTRADAS:  límite (float)
    SALIDAS:   el número de términos sumados y la suma
    ERRORES:
        Si el límite es negativo, la serie ya lo supera desde el principio.
*/
#include <iostream>
using namespace std;

int main()
{
    float limite;
    int n;
    float suma;

    cout << "Introduce el límite: ";
    cin >> limite;

    n = 0;
    suma = 0;

    while (suma <= limite)
    {
        n = n + 1;
        suma = suma + 1.0/n;
    }
    cout << "Nº de términos " << n << " suma = " << suma;
    return 0;
}
