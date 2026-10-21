/* ===== ENUNCIADO (literal del PDF) ===== */
//                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                               Estructura de un programa en C++
// 3.2.2 Segundo programa
// (Puedes descargarlo del aula virtual, P2Ej4)
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Convierte una distancia dada en pies a su equivalente en yardas,
//       pulgadas, cent�metros y metros.
//    ENTRADAS: pies, distancia medida en pies
//    SALIDAS: yardas, pulgadas, cent�metros, metros = distancia medida en
//                     esas unidades
//    ERRORES:
//       El programa es incorrecto si pies es negativo
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    real pies;
//    yardas, pulgadas, centimetros, metros: real;
//    yardas = pies/3.0;
//    pulgadas = = pies * 12.0;
//    centimetros = 2'54 * pulgadas;
//    metros = centimetros / 100;
//    return 0;
// }
// 3.3 Realizaci�n de programas
// 1. Programa que lea un n�mero entero de dos cifras y cree otro con esas cifras invertidas. Ejemplo,
//      si introducimos 45 deber�a generar el 54.
// 2. Programa que descodifique la fecha expresada como un entero de 6 d�gitos (DDMMAA), es decir,
//      el a�o viene representado en las unidades y decenas, el mes en las centenas y millares y el d�a en
//      las decenas y centenas de millar. Ejemplo: para una entrada como 121025 debe mostrar en
//      pantalla 12-10-2025.
/* ======================================= */

/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:

    ENTRADAS:
        Programa que lea un número entero de dos cifras y cree otro con esas cifras invertidas. Ejemplo, si introducimos 45 debería generar el 54.
    SALIDAS: velocidad, ser velocidad = 1500/(60*minutos+segundos)
    ERRORES:
        El programa es incorrecto si minutos y segundos no son positivos
*/
#include <iostream>
using namespace std;
int main()
{
    const float DISTANCIA=1500;
    int minutos,segundos;
    float velocidad;
    cout << "Introduce los minutos: ";
    cin >> minutos;
    cout << "Introduce los segundos: ";
    cin >> segundos;

    velocidad = DISTANCIA / (60 * minutos + segundos);

    cout << "Velocidad: " << velocidad << " m/s" << endl;
    return 0;
}

