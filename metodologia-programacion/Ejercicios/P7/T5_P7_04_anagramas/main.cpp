/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                              Vectores en C++
// 4.3 Tercer ejercicio
// Dise�a una acci�n (ll�mala actualizar) que reciba dos vectores de enteros (tama�o 100), actual de
// dimensi�n nact y altas de dimensi�n na, ordenados de forma creciente, y devuelva otro vector,
// nuevo (de dimensi�n nact+na <= 200) ordenado de forma creciente, que incluya los elementos de
// los vectores actual y altas.
// Crea un programa completo en C++ que permita introducir los dos vectores (actual y altas), llame
// al subprograma anterior y muestre por pantalla el contenido del vector resultado (nuevo). Utiliza
// subprogramas de escritura y escritura de vector.
// Ejemplo.
// Dados:
//           actual: (2, 4, 5, 8, 13, 14, 38)
//           altas: (6, 7, 10, 12)
// Devolver�a:
//           nuevo: (2, 4, 5, 6, 7, 8, 10, 12, 13, 14, 38)
// Nota: Suponer que no hay elementos repetidos
// 4.4 Cuarto ejercicio
// Dos palabras son anagramas cuando una se obtiene a partir de la otra mediante una reordenaci�n de
// las letras que la forman.
// Ejemplo: AMOR, MORA, ROMA, RAMO son anagramas entre ellas, pero no lo son con AROMA o REMO
// Escribe un subalgoritmo que dados v y w de tipo vector de caracteres (tama�o 15) y longitud nv y nw
// respectivamente determine si w es un anagrama de v.
// Crea un programa completo en C++ que permita introducir las dos palabras (utiliza un subprograma
// leerPalabra, que lea un vector de caracteres, a partir de una entrada secuencial acabada en `.'), llame
// al subprograma anterior y muestre por pantalla si las palabras son o no anagramas.
// 4.4.1 Cuarto ejercicio , versi�n 2
// Repite el ejercicio anterior pero simplificando la lectura de las palabras (trat�ndolas como cadenas de
// caracteres), utilizando la orden cin.getline().
// Dos consideraciones importantes:
//    � Ya no debemos preocuparnos de gestionar expl�citamente la lectura de los caracteres y su
//        almacenamiento en un vector.
//    � La longitud de las cadenas la podemos calcular usando la funci�n strlen.
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Dos palabras son anagramas si una se obtiene reordenando las letras de la otra
        (AMOR, MORA, ROMA, RAMO lo son; AROMA y REMO no). Escribe un subalgoritmo que,
        dados dos vectores de caracteres (tamaño 15) y sus longitudes, diga si w es anagrama
        de v. Programa completo con un subprograma leerPalabra que lea una entrada
        secuencial acabada en punto.
        (Practica 7, apartado 4.4)
    ENTRADAS:  dos palabras (acabadas en punto)
    SALIDAS:   si son o no anagramas
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
