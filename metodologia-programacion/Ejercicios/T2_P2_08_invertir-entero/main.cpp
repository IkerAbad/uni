/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:

    ENTRADAS:
        Programa que lea un número entero de dos cifras y cree otro con esas cifras invertidas. Ejemplo, si introducimos 45 debería generar el 54.
    SALIDAS: velocidad, ser velocidad = 1500/(60*minutos+segundos)
    ERRORES:
        El programa es incorrecto si minutos y segundos no son positivos
*/
#include <iostream>
using namespace std;
int main()
{
    const float DISTANCIA=1500;
    int minutos,segundos;
    float velocidad;
    cout << "Introduce los minutos: ";
    cin >> minutos;
    cout << "Introduce los segundos: ";
    cin >> segundos;

    velocidad = DISTANCIA / (60 * minutos + segundos);

    cout << "Velocidad: " << velocidad << " m/s" << endl;
    return 0;
}

