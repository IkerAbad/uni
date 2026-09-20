/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Convierte una distancia dada en pies a su equivalente en yardas, pulgadas, centímetros y metros.
    ENTRADAS: pies, distancia medida en pies
    SALIDAS: yardas, pulgadas, centímetros, metros = distancia medida en esas unidades
    ERRORES:
        El programa es incorrecto si pies es negativo
*/
#include <iostream>

using namespace std;

int main()
{
    float pies;
    float yardas, pulgadas, centimetros, metros;

    cout << "Introduce la distancia en pies: ";
    cin >> pies;

    yardas = pies/3;
    pulgadas = pies * 12;
    centimetros = 2.54 * pulgadas;
    metros = centimetros / 100;

    cout << "Yardas: " << yardas << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Centímetros: " << centimetros << endl;
    cout << "Metros: " << metros << endl;
    return 0;
}
