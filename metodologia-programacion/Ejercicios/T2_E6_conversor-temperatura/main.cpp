/*
    FECHA: 19/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Transformar una temperatura dada en grados centígrados a su equivalente en fahrenheit. La fórmula de conversión es: Fahrenheit = 9/5 Centígrado+ 32
    ENTRADAS: temperatura en grado centígrados (float)
    SALIDAS: grados fahrenheit (float)
    ERRORES: --
*/
#include <iostream>

using namespace std;
int main()
{
    float centigrados;      //variable entrada
    float fahrenheit;       //variables salida
    float cent_a_fahrenheit;//variable de conversión


    cout << "Introduce temperatura en grados centígrados: ";
    cin >> centigrados;

//conversión
    cent_a_fahrenheit = (9.0/5.0 * centigrados) + 32;
    fahrenheit = cent_a_fahrenheit;

//muestra los resultados
    cout << "Fahrenheit: " << fahrenheit << endl;
    return 0;
}
