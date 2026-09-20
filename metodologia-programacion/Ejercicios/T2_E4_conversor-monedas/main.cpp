/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Convertir una cantidad dada en euros a sus equivalentes en dólares y libras. Son datos de entrada también el valor de cambio de las monedas.
    ENTRADAS: euros (float), cambio a dólares (float) y cambio a libras (float)
    SALIDAS: dólares y libras
    ERRORES: Decimales con coma. El programa es incorrecto si algún cambio es negativo. Se permiten cantidades negativas.
*/
#include <iostream>

using namespace std;
int main()
{
    float euros,cambio_libras,cambio_dolares;           //variable entrada
    float libras,dolares;      //variables salida

    cout << "Introduce valor en euros: ";
    cin >> euros;
    cout << "Introduce cambio a dólares: ";
    cin >> cambio_dolares;
    cout << "Introduce cambio a libras: ";
    cin >> cambio_libras;

//conversión
    libras = euros * cambio_libras;
    dolares = euros * cambio_dolares;

//muestra los resultados
    cout << "Dolares: " << dolares << endl;
    cout << "Libras: " << libras << endl;
    return 0;
}
