/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Conversión de una cantidad positiva de segundos a su equivalente en horas, minutos y segundos
    ENTRADAS: segundos (int)
    SALIDAS: horas (int), minutos (int), segundos (int)
    ERRORES: --
*/
#include <iostream>

using namespace std;
int main()
{
    int segundos1;      //variable entrada
    int horas,minutos,segundos2;       //variables salida

    cout << "Introduce número de segundos: ";
    cin >> segundos1;

//cálculo
    horas = segundos1 / 3600;
    minutos = (segundos1 - (horas * 3600)) / 60;
    segundos2 = (segundos1 - (horas * 3600)) - (minutos * 60);

//muestra los resultados
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos2 << endl;
    return 0;
}
