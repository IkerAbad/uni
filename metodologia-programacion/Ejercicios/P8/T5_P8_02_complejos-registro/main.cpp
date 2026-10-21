/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                             Registros en C++
// 2.2 Segundo programa.
// Es habitual el uso registros para almacenar datos compuestos de varias partes, como los complejos o los
// n�meros racionales.
// Dedicamos este programa a realizar operaciones con complejos. Para ello se da el esqueleto del
// programa. Debes completar la definici�n del tipo y los subprogramas leerComplejo,
// escribirComplejo y sumar.
// (Como ejercicio, podr�as actualizar el programa "Calculadora de complejos" que hicimos en la pr�ctica
// 6, utilizando ahora un tipo de dato registro para manipular los n�meros complejos)
// /*
//    AUTOR:
//    DESCRIPCION:
//       Varias operaciones con n�meros complejos
//    ENTRADAS: n1, n2 = dos n�meros complejos
//    SALIDAS: sol = la soluci�n
// */
// #include <iostream>
// using namespace std;
// struct tComplejo
// {
//    ............
// }
// ...... leerComplejo (...........)
// ...... escribirComplejo (...........)
// ...... sumar (...........)
// int main()
// {
//    tComplejo n1, n2, sol;
//    leerComplejo(n1);
//    leerComplejo(n2);
//    sol=suma(n1, n2);
//    escribirComplejo(sol);
//    return 0;
// }
// ...... leerComplejo (...........)
// ........................
// ...... escribirComplejo (...........)
// ........................
// ...... suma(...........)
// ........................
/* ======================================= */

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
