/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                               Estructura repetitiva en C++
// 3.4 Cuarto ejercicio.
// Corrige los errores que tiene el siguiente programa (P4EJ7.cpp)
// En este programa se muestra un uso del esquema de repetici�n condicionada, que es el de validar las
// entradas. Casi todos los programas necesitan datos de entrada (le�dos habitualmente por teclado). En
// la mayor�a de los casos, dichos datos necesitan estar dentro de un rango preestablecido para que el
// programa funcione correctamente (por ejemplo, ser positivos, ser letras may�sculas, etc). Una forma
// de solucionar esto es impedir que el programa avance m�s all� de la(s) instrucci�n(es) de lectura si los
// valores introducidos no son correctos. Adem�s, se da la oportunidad al operador de volver a introducir
// de nuevo el dato.
// /*
//    AUTOR:
//    DESCRIPCION:
//       Valida la entrada. Muestra un mensaje cuando se introduce un n�mero en el rango [1,10]
//    ENTRADAS: un n�mero entero (n)
//    SALIDAS:
//    ERRORES:
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    int n;
//    do
//       cout << endl << "Introduce un n�mero entre 1 y 10: ";
//       cin >> n;
//    } while ((n<1) || (n>10))
//    cout << "Por fin has introducido un dato correcto!";
//    return 0;
// }
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Valida la entrada: pide un número y lo repite hasta que esté en el rango [1,10].
        ATENCIÓN: este programa viene CON ERRORES A PROPÓSITO; el ejercicio es encontrarlos.
        (Practica 4, apartado 3.4 -> P4EJ7)
    ENTRADAS:  un número entero (n)
    SALIDAS:   mensaje de confirmación cuando el dato es correcto
    ERRORES:   -
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    do {
        cout << endl << "Introduce un número entre 1 y 10: ";
        cin >> n;

    } while ((n < 1) || (10 < n));

        cout<<"Por fin has introducido un dato correcto! ";

        return 0;
}
