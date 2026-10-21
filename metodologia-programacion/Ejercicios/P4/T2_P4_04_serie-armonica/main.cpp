/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                               Estructura repetitiva en C++
// 3.3 Tercer ejercicio.
// El prop�sito del ejercicio es completar el dise�o de estructuras mientras que. Seg�n se ha descrito en
// las clases de teor�a, para dise�ar un bucle mientras es necesario establecer cu�l es la secuencia de
// instrucciones que se repiten y en qu� orden, cu�l es el caso trivial y cu�l es la condici�n de parada (la de
// continuaci�n ser� la contraria).
// Para repasar este proceso se proponen los siguientes dos ejercicios en los que deber�s establecer cu�l
// es la condici�n de continuaci�n, el caso inicial o el orden correcto de las instrucciones para que el
// programa resulte correcto y general.
// 3.3.1 Primer programa.
// Completa la condici�n de continuaci�n del siguiente programa (P4EJ5.CPP)
//        Obtener el n�mero de t�rminos de la serie que es necesario tomar para satisfacer la
//        desigualdad:
//                                             1 + 1/2 + 1/3 + . . . + 1/n > l�mite
//        siendo el valor l�mite introducido por teclado.
// /* FECHA:
//     AUTOR:
//     DESCRIPCI�N:
//       Obtiene el n�mero de t�rminos que hay que sumar para que la serie sobrepase un l�mite.
//     ENTRADAS: limite = l�mite que se quiere sobrepasar
//     SALIDAS: El n�mero de t�rminos sumados
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    float limite;
//    int n;
//    float suma;
//    cout << "Introduce el l�mite "
//    cin >> limite;
//    n = 0;         // Caso Inicial
//    suma = 0;
//    while .....        // Rellena la condici�n de continuaci�n
//    {
//       n = n + 1;      // Instrucciones que se repiten
//       suma = suma + 1.0/n; // Ojo, 1.0, valor float para que haga divisi�n real
//    }
//    cout << "N� de t�rminos " << n << "suma = " << suma;
//    return 0;
// }
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Obtiene el número de términos que hay que sumar de la serie armónica
            1 + 1/2 + 1/3 + ... + 1/n
        para que la suma sobrepase un límite dado.
        Hay que COMPLETAR la condición de continuación del while (y falta un ';' antes).
        (Practica 4, apartado 3.3.1 -> P4EJ5)
    ENTRADAS:  límite (float)
    SALIDAS:   el número de términos sumados y la suma
    ERRORES:
        Si el límite es negativo, la serie ya lo supera desde el principio.
*/
#include <iostream>
using namespace std;

int main()
{
    float limite;
    int n;
    float suma;

    cout << "Introduce el límite: ";
    cin >> limite;

    n = 0;
    suma = 0;

    while (suma <= limite)
    {
        n = n + 1;
        suma = suma + 1.0/n;
    }
    cout << "Nº de términos " << n << " suma = " << suma;
    return 0;
}
