/*
    FECHA: 18-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Escribe un programa que, dada una letra minúscula muestre por pantalla la correspondiente letra mayúscula.
    ENTRADAS: letra minúscula
    SALIDAS: letra mayúscula
*/
#include <iostream>

using namespace std;
int main()
{
    char minuscula;
    int mayuscula;

    cout << "Introduce una letra minúscula:" << endl;
    cin >> minuscula;

//convertir a mayúscula
    mayuscula = int(minuscula) - 32;

//muestra los resultados
    cout << char(mayuscula) << endl;

    return 0;
}
