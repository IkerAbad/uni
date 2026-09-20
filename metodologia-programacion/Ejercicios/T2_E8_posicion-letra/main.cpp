/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Leer una letra mayúscula y escribir su posición en el abecedario
    ENTRADAS: letra (char)
    SALIDAS: posicion (int)
    ERRORES: La letra introducida no es mayúscula y si la letra no pertenece al abecedario anglosajón.
*/
#include <iostream>

using namespace std;
int main()
{
    char letra;      //variable entrada
    int posicion;   //variable salida
    const int desplazamiento = int('A') - 1;   // 'A' vale 65; A -> posición 1

//teclado
    cout << "Introduce una letra mayúscula: ";
    cin >> letra;

//posición
    posicion = int(letra) - desplazamiento;

//muestra los resultados
    cout << "Posición en el abecedario: " << posicion;
    return 0;
}
