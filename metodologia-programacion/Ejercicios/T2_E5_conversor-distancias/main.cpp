/*
    FECHA: 19/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Convertir una medida dada en pies a sus equivalentes en: a) yardas: b) pulgadas; c) centímetros, y d) metros ( 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2.54 cm)
    ENTRADAS: medida en pies (float)
    SALIDAS: yardas, pulgadas, centímetros y metros
    ERRORES: Si se introduce un valor negativo -> (pies<0)
*/
#include <iostream>

using namespace std;
int main()
{
    float pies;           //variable entrada
    float yardas,pulgadas,cm,m;      //variables salida
    //variables de conversión
    const float pulgadas_por_pie = 12,pies_por_yarda = 3,cm_por_pulgada = 2.54,cm_por_metro = 100;



    cout << "Introduce medida en pies: ";
    cin >> pies;

//conversión
    yardas = pies / pies_por_yarda;
    pulgadas = pies * pulgadas_por_pie;
    cm = pulgadas * cm_por_pulgada;
    m = cm / cm_por_metro;

//muestra los resultados
    cout << "Yardas: " << yardas << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Centímetros: " << cm << endl;
    cout << "Metros: " << m << endl;
    return 0;
}
