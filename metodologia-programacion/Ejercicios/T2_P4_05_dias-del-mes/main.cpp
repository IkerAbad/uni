/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Dados un mes y un anyo, dice cuantos dias tiene ese mes, teniendo en cuenta los anyos
        bisiestos (divisibles por 4, pero no por 100, salvo los divisibles por 400).
        Ademas hay que VALIDAR las entradas (mes 1-12, anyo valido) y volver a pedirlas si no lo son.
        (Practica 4, apartado 3.5 -> P4EJ8)
    ENTRADAS:  mes y anyo (int)
    SALIDAS:   numero de dias del mes (int)
    ERRORES:
        Es incorrecto si el mes no esta entre 1 y 12 o el anyo es negativo.
*/
#include <iostream>

using namespace std;

int main()
{
    int dias,mes,anyo;

    mes = 0;
    anyo = -1;

    //bucle de teclado
    while ((mes < 1 || 12 < mes) || (anyo < 0))
    {
        if (mes < 1 || 12 < mes)
        {
            cout << endl << "Introduce un mes (número de mes del 1 al 12): ";
            cin >> mes;
        }
        if (mes < 1 || 12 < mes)
        {
            cout << "ERROR - No se ha introducido un número del 1 al 12." << endl;
        }
        else
        {
            cout << endl << "Introduce un año (después de cristo): ";
            cin >> anyo;
            if (anyo < 0)
            {
                cout << "ERROR - No se ha introducido un número positivo." << endl;
            }
        }
    }

    //

    switch (mes)
    {
    case 4: case 6: case 9: case 11:     // meses de 30 días
        dias = 30;
        break;

    case 2:                              // febrero: depende del año
        dias = 28;
        if ((anyo % 4 == 0 && anyo % 100 != 0) || anyo % 400 == 0) dias = 29;
        break;

    default:                             // el resto: 31
        dias = 31;
    }

    cout << endl << "El mes " << mes << " del año " << anyo << " tiene " << dias << " días." << endl;

    return 0;
}

