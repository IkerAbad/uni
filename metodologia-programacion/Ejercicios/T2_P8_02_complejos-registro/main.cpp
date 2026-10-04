/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Opera con complejos usando un tipo registro tComplejo (parte real e imaginaria).
        Hay que COMPLETAR la definición del tipo y los subprogramas leerComplejo,
        escribirComplejo y sumar (decisiones: qué campos, cuántos parámetros y de qué tipo,
        y si son acción o función).
        (Practica 8, apartado 2.2)
    ENTRADAS:  dos números complejos
    SALIDAS:   el complejo solución
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

struct tComplejo
{
   ............
}
...... leerComplejo (...........)
...... escribirComplejo (...........)
...... sumar (...........)
int main()
{
   tComplejo n1, n2, sol;
   leerComplejo(n1);
   leerComplejo(n2);
   sol=sumar(n1, n2);
   escribirComplejo(sol);
   return 0;
}
...... leerComplejo (...........)
........................
...... escribirComplejo (...........)
........................
...... sumar(...........)
........................
