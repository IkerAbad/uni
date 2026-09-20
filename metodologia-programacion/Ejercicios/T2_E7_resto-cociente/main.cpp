/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Dadas dos enteros n y m (n>m) escribir un algoritmo que permita calcular el resto y el cociente de la división entera
    ENTRADAS: entero1 (int), entero2 (int)
    SALIDAS: resto (int), cociente (int)
    ERRORES: Si entero1 es menor que entero2. Y si entero2 es igual a 0.
*/
#include <iostream>

using namespace std;
int main()
{
    int entero1,entero2;      //variable entrada
    int resto,cociente ;       //variables salida

    cout << "Introduce dos números enteros." << endl;
    cout << "Primer entero = ";
    cin >> entero1;
    cout << "Segundo entero = ";
    cin >> entero2;

//cálculo
    resto = entero1 % entero2;
    cociente = entero1 / entero2;

//muestra los resultados
    cout << "Resto: " << resto << endl;
    cout << "Cociente: " << cociente << endl;
    return 0;
}
