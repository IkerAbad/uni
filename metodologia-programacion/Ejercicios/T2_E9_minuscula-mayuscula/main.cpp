/*
    FECHA: 19/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Leer una letra minúscula y escribir la mayúscula correspondiente
    ENTRADAS: letra minúscula (char)
    SALIDAS: letra mayúscula (char)
    ERRORES: Si se introduce una letra que no sea minúscula y si se introduce una letra que no forme parte del alfabeto anglosajón
*/
#include <iostream>

using namespace std;
int main()
{
    char minuscula; //variable entrada
    int mayuscula;  //variable salida
    const int desplazamiento = int('a') - int('A');

//teclado
    cout << "Introduce una letra minúscula: ";
    cin >> minuscula;

//convertir a mayúscula
    mayuscula = int(minuscula) - desplazamiento;

//muestra los resultados
    cout << char(mayuscula) << endl;
    return 0;
}
