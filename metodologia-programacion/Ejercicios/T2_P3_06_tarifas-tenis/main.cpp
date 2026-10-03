/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Determina la tarifa de las entradas de la pista central segun la zona (1 a 4) y si el
        aficionado esta federado ('F') o no ('N'):
            Tarifa 1 -> zona 3 o 4
            Tarifa 2 -> zona 1 o 2 y NO federado
            Tarifa 3 -> zona 1 o 2 y federado
        (Practica 3, apartado 4.3, programa 1)
    ENTRADAS:  zona (int, 1-4) y tipo de aficionado (char: 'F' o 'N')
    SALIDAS:   la tarifa que le corresponde (texto)
    ERRORES:
        Es incorrecto si la zona no esta entre 1 y 4 o si el caracter no es 'F' ni 'N'.
*/
#include <iostream>

using namespace std;

int main()
{
    int zona;
    char federado;

    cout << "Indique el número de zona: ";
    cin >> zona;
    cout << "Indique si está federado (F) o no (N): ";
    cin >> federado;

    if (zona == 3 || zona == 4) {
        cout << "Le corresponde la Tarifa 1.";
    } else if (zona == 1 || zona == 2) {
        if (federado == 'N'){
            cout << "Le corresponde la Tarifa 2.";
        } else if (federado == 'F'){
            cout << "Le corresponde la Tarifa 3.";
        } else {
            cout << "ERROR - Tipo de aficionado no introducido.";
        }
    } else {
        cout << "ERROR - No existe la zona introducida.";
    }
    return 0;
}
