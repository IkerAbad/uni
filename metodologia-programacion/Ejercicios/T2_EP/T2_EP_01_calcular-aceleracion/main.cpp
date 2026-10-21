/* ===== ENUNCIADO (literal del PDF) ===== */
// Ejercicios Estructura Secuencial
// 1. algoritmo aceleraci�n
//     { Conocida la fuerza que act�a sobre una part�cula y su masa, calcular su
//     aceleraci�n }
// 2. algoritmo volumen cilindro
//     { Conocido el radio de la base y la altura de un cilindro, calcular su volumen }
// 3. algoritmo funciones trigonom�tricas
//     { Determinar el valor de las funciones trigonom�tricas (seno, coseno y tangente) de
//     un valor cualquiera }
// 4. algoritmo conversor monedas
//     { Convertir una cantidad dada en euros a sus equivalentes en d�lares y libras. Son
//     datos de entrada tambi�n el valor de cambio de las monedas}
// 5. algoritmo distancias
//     { Convertir una medida dada en pies a sus equivalentes en: a) yardas: b) pulgadas;
//     c) cent�metros, y d) metros ( 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada =
//     2.54 cm) }
// 6. algoritmo Fahrenheit
//     { Transformar una temperatura dada en grados cent�grados a su equivalente en
//     fahrenheit. La f�rmula de conversi�n es: Fahrenheit = 9/5 Cent�grado+ 32 }
// 7. algoritmo resto cociente
//     { Dadas dos enteros n y m (n>m) escribir un algoritmo que permita calcular el resto
//     y el cociente de la divisi�n entera }
// Metodolog�a de la Programaci�n |Ejercicios Estructura Secuencial                      1
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
    FECHA: 18-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Conocida la fuerza que actúa sobre una partícula y su masa, calcular su aceleración
    ENTRADAS: fuerza (float) y masa (float) de una partícula
    SALIDAS: valor de la aceleración (float) ->(a=F/m)
    ERRORES: masa=0
*/
#include <iostream>

using namespace std;
int main()
{

    float masa,fuerza;      //variables entrada
    float aceleracion;      //variable salida

    cout << "Introduce el valor de la masa y de la fuerza:";
    cout << endl << "Masa = ";
    cin >> masa;
    cout << "Fuerza = ";
    cin >> fuerza;

//cálculo de la aceleración
    aceleracion = fuerza / masa;

//muestra los resultados
    cout << "El valor de la aceleración es " << aceleracion << endl;

    return 0;
}
