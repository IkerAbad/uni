/* ===== ENUNCIADO (literal del PDF) ===== */
// 8. algoritmo posici�n letra may�scula
//     { Leer una letra may�scula y escribir su posici�n en el abecedario }
// 9. algoritmo min�scula may�scula
//     { Leer una letra min�scula y escribir la may�scula correspondiente }
// 10. algoritmo convertir horas minutos segundos
//     { Conversi�n de una cantidad positiva de segundos a su equivalente en horas,
//     minutos y segundos }
// 11. algoritmo cambio �ptimo
//     { Programa que obtenga el cambio �ptimo (m�nimo n�mero de monedas posible)
//     de una cantidad de c�ntimos de euro (entre 0 y 99), en monedas de 50, 20, 10, 5, 2
//     y 1 c�ntimo }
// 12. algoritmo intercambio valores
//     { Algoritmo que lea dos enteros recogi�ndolos en dos variables e intercambie el
//     contenido de esas dos variables }
// 13. algoritmo invertir entero
//     { Leer un n�mero entero de dos cifras y obtener el entero formado por las cifras
//     invertidas de este }
// 14. algoritmo descodificar fecha
//     { Descodificar una fecha expresada como un entero de 6 d�gitos en la forma
//     DDMMAA (Ejm: a partir del entero 251024, escribir "25 de 10 de 2024")}
// Metodolog�a de la Programaci�n |Ejercicios Estructura Secuencial  2
/* ======================================= */

/*
    FECHA: 19-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Leer una letra mayúscula y escribir su posición en el abecedario
    ENTRADAS: letra (char)
    SALIDAS: posicion (int)
    ERRORES: La letra introducida no es mayúscula y si la letra no pertenece al abecedario anglosajón.
*/
#include <iostream>

using namespace std;
int main()
{
    char letra;      //variable entrada
    int posicion;   //variable salida
    const int desplazamiento = int('A') - 1;   // 'A' vale 65; A -> posición 1

//teclado
    cout << "Introduce una letra mayúscula: ";
    cin >> letra;

//posición
    posicion = int(letra) - desplazamiento;

//muestra los resultados
    cout << "Posición en el abecedario: " << posicion;
    return 0;
}
