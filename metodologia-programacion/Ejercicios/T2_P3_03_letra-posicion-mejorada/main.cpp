/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Dada una letra, calcula su posicion en el alfabeto. Si es minuscula, la convierte antes a
        mayuscula (version A) y, ademas, avisa si el caracter introducido no es una letra (version B).
        (Practica 3, apartado 4.2.2 -> P3EJ2A y P3EJ2B)
    ENTRADAS:  un caracter (char)
    SALIDAS:   la posicion en el alfabeto (int)
    ERRORES:
        Es incorrecto si el caracter no es una letra (en la version B se avisa).
*/
#include <iostream>

using namespace std;
int main()
{
    char letra;      //variable entrada
    int posicion;   //variable salida
    const int desplazamiento = int('A') - 1;   // 'A' vale 65; A -> posición 1

    //teclado
    cout << "Introduce una letra: ";
    cin >> letra;

    if (letra >= 'A' && letra <= 'Z'){   // si se introduce una letra mayúscula
        posicion = int(letra) - desplazamiento;
        cout << "Posición en el abecedario: " << posicion;
    } else if (letra >= 'a' && letra <= 'z') { // si se introduce una letra minúscula
        //convertir a mayúscula
        letra = letra - 32;          // la 'a' (97) pasa a valer 65, o sea 'A'
        posicion = int(letra) - desplazamiento;
        cout << "Posición en el abecedario: " << posicion;
    } else { // mensaje de error
        cout << "ERROR - No se ha introducido una letra";
    }



    //muestra los resultados

    return 0;
}

