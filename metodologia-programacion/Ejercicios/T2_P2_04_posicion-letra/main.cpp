/*
Interfaz:
    Entrada: carácter letra
    Salida: entero posicion
Efecto:
    Condiciones previas: letra mayúscula
    Efecto producido: posición que ocupa la letra en el alfabeto
Algoritmo posición letra mayúscula
    carácter letra
    entero posición
principio
    leer(letra)
    posición = ascii(letra) - ascii('A') + 1
    escribir(posición);
fin
*/
/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Dada una letra mayúscula calcula cuál es su posición en el alfabeto
    ENTRADAS: letra (la letra mayúscula)
    SALIDAS: posición (la posición en el alfabeto)
    ERRORES:
        El programa es incorrecto si la letra no es una mayúscula
*/

#include <iostream>
using namespace std;
int main()
{
    char letra;
    int posicion;

    cout << "Introduce una letra: ";
    cin >> letra;

    posicion = int(letra) - char('A') + 1;

    cout << "Posición: " << posicion;
    return 0;
}
