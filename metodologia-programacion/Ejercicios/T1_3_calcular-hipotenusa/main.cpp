/*
    FECHA: 18/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Escribe un programa que, dados los catetos de un triángulo rectángulo cualquiera, calcule el valor de su hipotenusa y lo muestre por pantalla.
    ENTRADAS: valor de los catetos (variables c1,c2)
    SALIDAS: valor de la hipotenusa (variable h)
*/
#include <iostream>
#include <cmath> // Fichero de cabecera necesario para usar la función sqrt()
using namespace std;
int main()
{

    float c1,c2;    //variables de catetos
    float h;        //variable de hipotenusa

    cout << "Introduce el valor del cateto 1 y del cateto 2";
    cout << endl<< "cateto 1 = ";
    cin >> c1;
    cout << "cateto 2 = ";
    cin >> c2;

//cálculo de la hipotenusa
    h=sqrt((c1*c1)+(c2*c2));

//muestra los resultados
    cout << "El valor de la hipotenusa es " << h << endl;

    return 0;
}
