/*
    FECHA: 19/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Algoritmo que lea dos enteros recogiéndolos en dos variables e intercambie el contenido de esas dos variables
    ENTRADAS: entero1 (int), entero2 (int)
    SALIDAS: entero1 y entero2 con los valores intercambiados
    ERRORES: sin errores mientras se introduzcan dos números enteros
*/
#include <iostream>

using namespace std;
int main()
{
    int entero1,entero2;      //variables entrada/salida

    int aux = 0; //variable auxiliar

//teclado
    cout << "Introduce dos números enteros:" << endl;
    cout << "Entero 1: ";
    cin >> entero1;
    cout << "Entero 2: ";
    cin >> entero2;

//intercambio
    aux = entero1;
    entero1 = entero2;
    entero2 = aux;

//muestra los resultados
    cout << endl << "Entero 1: " << entero1 << endl;
    cout << "Entero 2: " << entero2 << endl;
    return 0;
}
