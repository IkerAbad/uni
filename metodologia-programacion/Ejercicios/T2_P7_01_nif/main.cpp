/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Traduce el algoritmo del NIF: lee un DNI y escribe la letra que le corresponde,
        usando un vector de caracteres con las 23 letras y el resto de la división por 23
        (el NIF se calcula como dvi MOD 23).
        (Practica 7, apartado 4.1 -> P7EJ1)
    ENTRADAS:  el dni (entero)
    SALIDAS:   la letra del NIF (caracter)
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

/* Seudocódigo del enunciado (tradúcelo a C++):
   algoritmo calculo NIF
   variables
      entero dni
      caracter letraNIF
   principio
      leer(dni)
      letraNIF = calculoletraNIF(dni)
      escribir(letraNIF)
   fin

   función calculoletraNIF(entero dni) devuelve caracter
   variables
      caracter listaLetrasNIF[24] = "TRWAGMYFPDXBNJZSQVHLCKE"   (23 letras + '\0')
      entero resto
   principio
      resto = dni MOD 23
      devuelve(listaLetrasNIF[resto])
   fin
*/

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
