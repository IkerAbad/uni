/*
    FECHA: 18/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Conocida la fuerza que actúa sobre una partícula y su masa, calcular su aceleración
    ENTRADAS: fuerza (float) y masa (float) de una partícula
    SALIDAS: valor de la aceleración (float) ->(a=F/m)
    ERRORES: masa=0
*/
#include <iostream>

using namespace std;
int main()
{

    float masa,fuerza;      //variables entrada
    float aceleracion;      //variable salida

    cout << "Introduce el valor de la masa y de la fuerza:";
    cout << endl << "Masa = ";
    cin >> masa;
    cout << "Fuerza = ";
    cin >> fuerza;

//cálculo de la aceleración
    aceleracion=fuerza/masa;

//muestra los resultados
    cout << "El valor de la aceleración es " << aceleracion << endl;

    return 0;
}
