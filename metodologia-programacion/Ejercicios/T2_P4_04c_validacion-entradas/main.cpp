/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Valida la entrada: pide un número y lo repite hasta que esté en el rango [1,10].
        ATENCIÓN: este programa viene CON ERRORES A PROPÓSITO; el ejercicio es encontrarlos.
        (Practica 4, apartado 3.4 -> P4EJ7)
    ENTRADAS:  un número entero (n)
    SALIDAS:   mensaje de confirmación cuando el dato es correcto
    ERRORES:   -
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    do {
        cout << endl << "Introduce un número entre 1 y 10: ";
        cin >> n;

    } while ((n < 1) || (10 < n));

        cout<<"Por fin has introducido un dato correcto! ";

        return 0;
}
