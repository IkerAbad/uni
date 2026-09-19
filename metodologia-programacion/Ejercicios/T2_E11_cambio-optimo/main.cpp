/*
    FECHA: 19/09/2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Programa que obtenga el cambio óptimo (mínimo número de monedas posible) de una cantidad de céntimos de euro (entre 0 y 99), en monedas de 50, 20, 10, 5, 2 y 1 céntimo
    ENTRADAS: centimos (int)
    SALIDAS: moneda50 (int), moneda20 (int), moneda10 (int), moneda5 (int), moneda2 (int), moneda1 (int)
    ERRORES: Entrada menor a 0 o mayor de 99.
*/
#include <iostream>

using namespace std;
int main()
{
    int centimos;      //variable entrada
    int moneda50,moneda20,moneda10,moneda5,moneda2,moneda1;       //variables salida
    int aux = 0; //variable auxiliar

//teclado
    cout << "Introduce una cantidad de céntimos: ";
    cin >> centimos;

//cálculo
    moneda50 = centimos / 50;
    aux = (centimos % 50);
    moneda20 = (aux) / 20;
    aux = aux % 20;
    moneda10 = (aux) / 10;
    aux = aux % 10;
    moneda5 = (aux) / 5;
    aux = aux % 5;
    moneda2 = (aux) / 2;
    moneda1 = aux % 2;



//muestra los resultados
    cout << "Monedas de 50 céntimos: " << moneda50 << endl;
    cout << "Monedas de 20 céntimos: " << moneda20 << endl;
    cout << "Monedas de 10 céntimos: " << moneda10 << endl;
    cout << "Monedas de 5 céntimos: " << moneda5 << endl;
    cout << "Monedas de 2 céntimos: " << moneda2 << endl;
    cout << "Monedas de 1 céntimos: " << moneda1 << endl;
    return 0;
}
