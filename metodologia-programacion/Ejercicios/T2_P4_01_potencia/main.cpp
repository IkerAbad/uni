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

