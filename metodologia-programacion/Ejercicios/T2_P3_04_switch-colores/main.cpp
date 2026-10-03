/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Muestra por pantalla "rojo", "verde", "azul" o "negro" segun la letra introducida, usando switch.
        OJO: este programa viene CON ERRORES A PROPOSITO (igual que en el PDF).
        El ejercicio es encontrarlos y corregirlos, no reescribirlo.
        (Practica 3, apartado 4.2.3 -> P3EJ4)
    ENTRADAS:  una letra (char): r/R rojo, v/V verde, a/A azul, cualquier otra cosa negro
    SALIDAS:   el nombre del color (texto)
    ERRORES:
        Si se introduce algo que no sea una letra, cae en "negro".
*/
#include <iostream>

using namespace std;

int main()
{
    char color;

    // Entrada de datos
    cout << "Introduce una sola letra: " << endl;
    cout << "color = ";
    cin >> color;

    switch (color)
    {
        case 'r':
        case 'R':
        {
            cout << "Rojo";
            break;
        }
        case 'v':
        case 'V':
        {
            cout << "Verde";
            break;
        }
        case 'a':
        case 'A':
        {
            cout << "Azul";
            break;
        }
        default:
        {
            cout << "Negro";
            break;

        }
    }
    return 0;
}
