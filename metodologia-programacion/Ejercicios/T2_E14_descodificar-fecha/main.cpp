/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Descodificar una fecha expresada como un entero de 6 dígitos en la forma DDMMAA (Ejm: a partir del entero 251024, escribir “25 de 10 de 2024”)
    ENTRADAS: fecha (int)
    SALIDAS: dia (int), mes (int) y anio (int)
    ERRORES: sin errores mientras se introduzca un número entero de seis cifras y se asume siglo XXI (el 99 se leería 2099, nunca 1999)
*/
#include <iostream>

using namespace std;
int main()
{
    int fecha;     //variable entrada
    int dia,mes,anio;  //variables salida

//teclado
    cout << "Introduce un número entero de 6 cifras: ";
    cin >> fecha;

//formateo
    dia = fecha / 10000;
    mes = (fecha / 100) % 100;
    anio = (fecha % 100) + 2000;

//muestra los resultados
    cout << endl << "Fecha: " << dia << " de " << mes << " de " << anio;
    return 0;
}
