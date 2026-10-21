/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                               Estructura repetitiva en C++
// 3.2 Segundo ejercicio
// El siguiente programa en C++ contiene errores tanto de compilaci�n como de ejecuci�n, corr�gelos.
//        Este programa calcula el valor del n�mero e a partir de su desarrollo en serie:
//                                              1+ 1 + 1 + 1 +
//                                                  1! 2! 3!
//        Se sumar�n t�rminos de la serie hasta que estos sean m�s peque�os que un valor introducido por
//        teclado (cota).
// Puedes recuperar este programa fichero P4EJ4.CPP
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCION:
//    Calcula el valor del n�mero e a partir de su desarrollo en serie.
//    ENTRADAS: cota, que indica que se debe parar de sumar la serie cuando
//         el valor del t�rmino que se va a sumar sea menor que ella
//    SALIDAS: e, el valor de la suma de la serie
//    ERRORES: si el valor de cota es negativo el programa no termina nunca
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    float cota,e,termino;
//    int i;
//    termino=1
//    e:=1 // Soluci�n del problema trivial
//    cout << endl << "Introduce un valor para la cota (positivo y 'peque�o'): ";
//    cin >> cota;
//    i=1;
//    while (termino>=cota)
//    {
//       e=e+termino;
//       i=i+1;
//       termino=termino/i; // es lo mismo (pero m�s sencillo) que termino=1/i!,
//                                        // generamos el siguinete t�rmino dividiendo el actual entre i,
//                                        // as� evitamos tener que calcular el factorial
//    }
//    cout << endl << "El valor aproximado del n�mero e es: " << e;
//    return 0;
// }
// Para comprobar el buen funcionamiento del programa, al introducir el valor de cota=0.001 se debe
// obtener la salida 2.71806.
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula el valor del número e a partir de su desarrollo en serie:
            1 + 1/1! + 1/2! + 1/3! + ...
        Se suman términos hasta que el siguiente sea menor que la cota introducida.
        ATENCIÓN: este programa viene CON ERRORES A PROPÓSITO (de compilación y de ejecución).
        El ejercicio es encontrarlos y corregirlos.
        (Practica 4, apartado 3.2 -> P4EJ4)
    ENTRADAS:  cota (float), valor por debajo del cual se deja de sumar
    SALIDAS:   e (float), valor aproximado del número e
    ERRORES:
        Es incorrecto si la cota es menor o igual que 0 (el bucle no termina nunca).
        El programa lo comprueba, avisa y no calcula.
        Comprobación: con cota = 0.001 debe salir 2.71806.
*/
#include <iostream>
using namespace std;

int main()
{
    float cota,e,termino;
    int i;

    termino = 1;
    e = 1;

    cout << endl << "Introduce un valor para la cota (positivo y 'pequeño'): ";
    cin >> cota;

    if (cota <= 0)
    {
        cout << "ERROR - La cota debe ser mayor que cero.";
    }
    else
    {
        i = 1;
        while (termino >= cota)
        {
            e = e + termino;
            i = i + 1;
            termino = termino / i;
        }
        cout << endl << "El valor aproximado del número e es: " << e;
    }
    return 0;
}
