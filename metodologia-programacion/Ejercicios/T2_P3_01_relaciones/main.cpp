/*
  FECHA: 20-09-2026
  AUTOR: Iker
  DESCRIPCIÓN:
    Muestra por pantalla una serie de mensajes dependiendo de las relaciones entre los valores de tres variables
  ENTRADAS: el valor de tres variables (v1,v2,v3)
  SALIDAS:
*/

#include <iostream>
using namespace std;


int main()
{
    int v1,v2,v3;

    // Entrada de datos
    cout << endl << "Introducir los valores de:" << endl;
    cout << "v1 = ";
    cin >> v1;
    cout << "v2 = ";
    cin >> v2;
    cout << "v3 = ";
    cin >> v3;

    if ((v1 + v2 + v3) == 0)
    {
        cout << endl << "Todas las variables suman cero";
    }

    if (v1 > 0 && v2 > 0 && v3 > 0)
    {
        cout << endl << "Todas las variables son positivas";
    }

    if ((v1 != v2) && (v1 != v3) && (v2 != v3))
    {
        cout << endl << "Todos sus valores son distintos";
    }

    if (!((v1 == v2) && (v2 == v3)))
    {
        cout << endl << "Como máximo dos de sus valores coinciden";
    }

    if ((v1 < v2 && v2 < v3) || (v3 < v2 && v2 < v1))
    {
        cout <<endl<<"El valor de v2 está comprendido entre los de v1 y v3";
    }
    return 0;
}

