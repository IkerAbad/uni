/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Calcula el área de un cilindro, conocidos su radio y altura.
    ENTRADAS: radio y altura. Deben ser positivos.
    SALIDAS: vol
    ERRORES:
        El programa no funciona si los valores de radio y altura son negativos.
*/

#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.14;
    float radio, altura; // entrada: radio de la base; altura del cilindro
    float vol; // salida: volumen del cilindro
    float base; // área de la base del cilindro

    cout << "Introduce el valor del radio (valor positivo)";
    cin >> radio;
    cout << "Introduce el valor de la altura (valor positivo)";
    cin >> altura;

    base = PI * radio * radio;

    vol = base * altura;

    cout << "El volumen del cilindro de radio " << radio << " y altura ";
    cout << altura << " es " << vol;

    return 0;
}
