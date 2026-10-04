/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                    Estructura repetitiva en C++
// 3.5 Quinto ejercicio.
// Dados un mes y un a�o (en n�mero), determinar el n�mero de d�as que tiene dicho mes, teniendo en
// cuenta que el a�o puede ser bisiesto (recuerda que los a�os bisiestos son los que son divisibles por 4
// pero no por 100, y los que siendo divisibles por 100, son divisibles por 400).
// El objetivo del ejercicio es que realices una validaci�n de las entradas, es decir, que al leer los ordinales
// de mes y de a�o debes verificar que son valores v�lidos para esos dos conceptos. Llama al nuevo
// programa P4EJ8.
// 3.6 Sexto ejercicio.
// Para realizar este ejercicio debes recuperar la correcci�n que hiciste del programa P4EJ6.cpp
// En primer lugar, realiza una validaci�n de la entrada: n debe ser una cantidad estrictamente mayor que
// uno. Una vez funcione esto, transforma el esquema mientras que del programa a un esquema repetir
// que realice el mismo c�lculo. Llama al nuevo programa P4EJ9. �Es posible utilizar la estructura for en
// este programa? En caso afirmativo, hazlo.
// 3.7 Realizaci�n de programas
// 1. Dado un n�mero entero n (>0), determinar si es primo.
// 2. Dado un n�mero entero n, calcula la suma de la siguiente serie:
// suma  =  1  +  2   +  3   ++ n
//          2     22     23        2n
// 3. Muesta por la pantalla todos los n�meros de tres cifras con las tres cifras impares.
// 4. Dado un n�mero entero, determina el n�mero de d�gitos que tiene.
/* ======================================= */

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

