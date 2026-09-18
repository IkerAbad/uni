/*
    FECHA: 18/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Determinar el valor de las funciones trigonométricas (seno, coseno y tangente) de un valor cualquiera
    ENTRADAS: ángulo en grados (float)
    SALIDAS: seno, coseno y tangente
    ERRORES: para múltiplos impares de 90 (90, 270, ...) la tangente no existe;
             el coseno de entrada no da 0 exacto por redondeo y el programa
             devuelve un valor enorme sin sentido.
*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;
int main()
{
    const float pi = M_PI; //constante pi
    float radianes; //variable aux
    float grados;           //variable entrada
    float seno,coseno,tangente;      //variables salida

    cout << "Introduce el ángulo: ";
    cin >> grados;

//conversión de grados a radianes
    radianes = grados * (pi / 180.0);

//cálculo de las funciones trigonométricas
    seno = sin(radianes);
    coseno = cos(radianes);
    tangente = tan(radianes);

//muestra los resultados
    cout << "El seno es " << seno << endl;
    cout << "El coseno es " << coseno << endl;
    cout << "La tangente es " << tangente << endl;
    return 0;
}
