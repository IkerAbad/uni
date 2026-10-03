/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula el cociente y el resto de dividir a entre b SIN usar / ni % (restas sucesivas).
        (Practica 4, apartado 3.1.2 -> P4EJ2)
    ENTRADAS:  enteros a y b (int)
    SALIDAS:   cociente y resto (int)
    ERRORES:
        Es incorrecto si b <= 0 o si a < 0. El programa lo comprueba, avisa y no calcula.
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,cociente,resto;

    cout << "Introduce el dividendo: ";
    cin >> a;
    cout << "Introduce el divisor: ";
    cin >> b;
    cociente = 0;

    if(b == 0)
    {
        cout << "ERROR - Divisor no puede ser cero.";
    }
    else if (a < 0 || b < 0)
    {
        cout << "ERROR - Los números introducidos deben ser positivos.";
    }
    else
    {
        while (a >= b)
        {
        a = a - b;
        cociente = cociente + 1;
        }
        resto = a;
        cout << "Cociente: " << cociente << endl << "Resto: " << resto;
    }

    return 0;
}
