/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Leer un número entero de dos cifras y obtener el entero formado por las cifras invertidas de este
    ENTRADAS: entero (int)
    SALIDAS: inversion (int)
    ERRORES: sin errores mientras se introduzca un número entero de dos cifras
*/
#include <iostream>

using namespace std;
int main()
{
    int entero;     //variable entrada
    int inversion;  //variable salida

    int decena,unidad; //variables auxiliares

//teclado
    cout << "Introduce un número entero: ";
    cin >> entero;

//inversion
    decena = entero / 10;
    unidad = (entero % 10);
    inversion = (unidad * 10) + decena;

//muestra los resultados
    cout << endl << "Número invertido: " << inversion;
    return 0;
}
