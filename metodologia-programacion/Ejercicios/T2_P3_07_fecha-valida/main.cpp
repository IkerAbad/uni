/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                             Estructura alternativa en C++
// 4.3 Realizaci�n de programas
//    1. Escribe un programa que determine el precio de las entradas para los partidos de la pista central
//        de un torneo de tenis ("Tarifa 1", "Tarifa 2" o "Tarifa 3"), seg�n la zona ocupada (puede ser 1, 2,
//        3 o 4) y teniendo en cuenta si el aficionado est� federado ('F') o no federado (`N'), de la siguiente
//        manera (tanto la zona como el tipo de aficionado son datos de entrada):
//               � Tarifa 1: zona 3 o 4
//               � Tarifa 2: zona 1 o 2 y No Federado (`N')
//               � Tarifa 3: zona 1 o 2 y Federado (`F')
//    2. Escribe un programa que pida una fecha (d�a, mes y a�o) y diga si es correcta (supondremos que
//        son fechas del siglo XXI).
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Pide una fecha (dia, mes, anyo) y dice si es correcta, suponiendo fechas del siglo XXI.
        Hay que tener en cuenta los meses de 30 y 31 dias y los febreros de los anyos bisiestos
        (divisibles por 4, salvo los divisibles por 100 que no lo sean por 400).
        (Practica 3, apartado 4.3, programa 2)
    ENTRADAS:  dia, mes y anyo (int)
    SALIDAS:   un mensaje diciendo si la fecha es correcta o no
    ERRORES:
        El enunciado asume anyos del siglo XXI (2000-2099).
*/
#include <iostream>

using namespace std;

int main()
{
    int dia,mes,anyo;

    cout << "Introduce una fecha del siglo XXI: " << endl << "Día: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Año: ";
    cin >> anyo;

    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (anyo >= 2000 && anyo <= 2099))
    {

        switch (mes)
        {
        case 2:   // febrero: 28 días, o 29 si el año es bisiesto
            if (dia <= 28)
            {
                cout << "Fecha introducida correctamente: " << dia << "-" << mes << "-" << anyo << ".";
            }
            else if (dia == 29 && (anyo % 4 == 0 && anyo % 100 != 0 || anyo % 400 == 0))
            {
                cout << "Fecha introducida correctamente: " << dia << "-" << mes << "-" << anyo << ".";
            }
            else
            {
                cout << "ERROR - Fecha inválida.";
            }
            break;

        case 4: case 6: case 9: case 11:   // meses de 30 días
            if (dia <= 30)
            {
                cout << "Fecha introducida correctamente: " << dia << "-" << mes << "-" << anyo << ".";
            }
            else
            {
                cout << "ERROR - Fecha inválida.";
            }
            break;

        default:   // el resto (1, 3, 5, 7, 8, 10, 12): 31 días
            if (dia <= 31)
            {
                cout << "Fecha introducida correctamente: " << dia << "-" << mes << "-" << anyo << ".";
            }
            else
            {
                cout << "ERROR - Fecha inválida.";
            }
            break;
        }
    }
    else
    {
        cout << "ERROR - Fecha inválida.";
    }
    return 0;
}
