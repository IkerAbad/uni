/*
Interfaz
    Entrada: entero cantSegundos
    Salida: entero h, m, s
Efecto
    Condiciones previas: cantSegundos >=0
    Efecto producido: horas (h), minutos (m) y segundos (s) y cantSegundos = h*3600+m*60+s, h>=0, 0<=m<60, 0<=s<60

Algoritmo Convertir horas minutos segundos
variables
    entero cantidad
    entero h, m, s
    entero auxiliar
inicio
    leer(cantidad)
    h = cantidad div 3600
    auxiliar = cantidad mod 3600
    m = auxiliar div 60
    s = auxiliar mod 60
    escribir(h, m, s)
fin
*/
/*
    FECHA:    20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN: Convertir una cantidad positiva de segundos a su equivalente en horas, minutos y segundos
    ENTRADAS: cantidad (int)
    SALIDAS:  horas, minutos, segundos (int)
    ERRORES:  la cantidad introducida es menor a cero
*/
#include <iostream>
using namespace std;
int main()
{
    int cantidad;   //variable entrada
    int horas,minutos,segundos; //variables salida
    int aux; //variable auxiliar

    //teclado
    cout << "Introduce una cantidad de segundos: ";
    cin >> cantidad;

    //cálculo
    horas = cantidad / 3600;
    aux = cantidad % 3600;
    minutos = aux / 60;
    segundos = aux % 60;

    //salida
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    return 0;
}
