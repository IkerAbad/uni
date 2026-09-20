/*
    FECHA: 20/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
    Calcula la velocidad en m/s de un corredor de una carrera de 1500 m., conocido el tiempo que tarda en realizar la prueba.
    ENTRADAS:
        minutos, cantidad de minutos invertidos por el corredor
        segundos, cantidad de segundos invertidos por el corredor
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
    cin >> minutos;
    cin >> segundos;
    velocidad = DISTANCIA /(60 * minutos + segundos);
    cout << velocidad;
    return 0;
}

