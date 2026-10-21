/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                           Estructura alternativa en C++
//    switch (color)
//    {
//       case 'r':
//       case "R":
//       {
//          cout << endl << "Rojo";
//       }
//       case v:
//       case 'V':
//       {
//          cout << endl << "Verde";
//       }
//       break;
//       case 'a':
//       case 'A':
//       {
//          cout << endl << "Azul";
//       }
//       break;
//       default:
//       {
//          cout << endl << "Negro";
//       }
//    return 0;
// }
// 4.2.4 Cuarto programa
// Traduce el siguiente algoritmo a C++. Edita, guarda con el nombre P3EJ5, compila y ejecuta el programa.
// Entrada: temperatura
// Salida: se muestra un mensaje en funci�n de la temperatura
// Algoritmo controlTemperatura
// variables
//    real temperatuta
// principio
//    leer(temperatura)
//    si temperatura<=0 entonces
//       escribir("Demasiado fr�o")
//    si_no
//       si temperatura<=10 entonces
//          escribir("Fr�o")
//       si_no
//          si temperatura<=25 entonces
//              escribir("Agradable")
//          si_no
//              si temperatura<=35 entonces
//                 escribir("Calor")
//              si_no
//                 escribir("Demasiado calor")
//              fsi
//          fsi
//       fsi
//    fsi
// fin
/* ======================================= */

/*
    FECHA:     03-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Lee una temperatura y escribe un mensaje segun el tramo en que este:
            <=0 "Demasiado frio" · <=10 "Frio" · <=25 "Agradable" · <=35 "Calor" · >35 "Demasiado calor".
        Hay que traducir el algoritmo controlTemperatura del enunciado (4.2.4 -> P3EJ5).
    ENTRADAS:  la temperatura (float)
    SALIDAS:   el mensaje correspondiente (texto)
    ERRORES:
        Ningun valor real es incorrecto (los intervalos son cerrados por la izquierda).
*/
#include <iostream>

using namespace std;

int main()
{
    float temperatura;

    cout << "Introduce en grados celsius la temperatura: " << endl;
    cin >> temperatura;

    if (temperatura <= 0){
        cout << "Demasiado frío";
    } else if (temperatura <= 10){
        cout << "Frío";
    } else if (temperatura <= 25){
        cout << "Agradable";
    } else if (temperatura <= 35){
        cout << "Calor";
    } else {
        cout << "Demasiado calor";
        }
    return 0;
}
