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
