/*
    FECHA:     14-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula la longitud media de las palabras de una entrada secuencial de caracteres acabada en
        punto. (Puede haber varios espacios entre palabras, y espacios al principio y al final.)
        (Practica 5, apartado 2.3, programa 1)
    ENTRADAS:  una secuencia de caracteres terminada en '.'
    SALIDAS:   la longitud media de las palabras (float)
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

int main()
{
    cin.unsetf(ios::skipws); // Evita que cin ignore espacios en blanco

    int nEspacios, nCaracteres, nPalabras;
    char c;
    float media;

    nEspacios = 0;
    nPalabras = 0;
    nCaracteres = 0;
    media = 0.0;
    cout << "Introduce una serie de caracteres que acabe en '.': ";
    cin >> c;

    while (c != '.')
    {
        while (c != ' ')
        {
            if (c != ' ')
            {
                nCaracteres = nCaracteres + 1;
            } else {
                nEspacios = nEspacios + 1;
            }
            cin >> c;
        }

        
    }
    // media = media + (nCaracteres / nPalabras);
    cout << "Número de caracteres: " << nCaracteres;
    cout << "Número de palabras: " << nPalabras;
    cout << "Número de espacios: " << nEspacios;
    cout << "Número de veces que aparace la letra 'a': " << media;

    return 0;
}
