/*
    FECHA: 18/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Conocido el radio de la base y la altura de un cilindro, calcular su volumen
    ENTRADAS: radioBase (float) y altura (float) de un cilindro
    SALIDAS: volumen del cilindro (float) -> (base x altura)
    ERRORES: radio y altura ≤ 0
*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;
int main()
{
    const float pi = M_PI; //constante pi
    float areaBase; //variable auxiliar

    float radioBase,altura;      //variables entrada
    float volumen;      //variable salida

    cout << "Introduce el radio y la altura de un cilindro:";
    cout << endl << "Radio = ";
    cin >> radioBase;
    cout << "Altura = ";
    cin >> altura;

//cálculo del área de la base
    areaBase = pi * radioBase * radioBase;

//cálculo del volumen
    volumen = areaBase * altura;

//muestra los resultados
    cout << "El volumen del cilindro es " << volumen << endl;
    return 0;
}
